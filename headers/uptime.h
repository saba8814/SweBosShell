void read_machine_data(char* machine_name, char* username);
void display_uptime();
int get_number_of_machine_users();
struct sysinfo info;

void read_machine_data(char* machine_name, char* username){
    gethostname(machine_name, HOST_NAME_MAX);
    strncpy(username,getenv("USER"),LOGIN_NAME_MAX);
}
void display_uptime(char* flag, char* command){
    substring(flag,command,7,MAX_INPUT);
    if(strcmp(flag,"")==0){
        sysinfo(&info);
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        int seconds_since_boot=info.uptime;
        int hours_since_boot,minutes_since_boot;
        hours_since_boot = (seconds_since_boot/3600); 
        minutes_since_boot = (seconds_since_boot -(3600*hours_since_boot))/60;
        set_color_magenta();
        printf(" %02d:%02d:%02d up %d:%02d, ", tm.tm_hour, tm.tm_min, tm.tm_sec,hours_since_boot,minutes_since_boot);
        printf(" %d user, load average: %0.2f, %0.2f, %0.2f", get_number_of_machine_users(),info.loads[0]/100000.0, info.loads[1]/100000.0, info.loads[2]/100000.0);
        reset_color();
    }
    else{
        if(strcmp(flag,"-o")==0){
            FILE *f = fopen("output.txt", "w");
            sysinfo(&info);
            time_t t = time(NULL);
            struct tm tm = *localtime(&t);
            int seconds_since_boot=info.uptime;
            int hours_since_boot,minutes_since_boot;
            hours_since_boot = (seconds_since_boot/3600); 
            minutes_since_boot = (seconds_since_boot -(3600*hours_since_boot))/60;
            fprintf(f,"%02d:%02d:%02d up %d:%02d, ", tm.tm_hour, tm.tm_min, tm.tm_sec,hours_since_boot,minutes_since_boot);
            fprintf(f," %d user, load average: %0.2f, %0.2f, %0.2f", get_number_of_machine_users(),info.loads[0]/100000.0, info.loads[1]/100000.0, info.loads[2]/100000.0);
            set_color_green();
            printf("Uptime outputted to output.txt file.");
            fclose(f);
        }
        else{
             set_color_magenta();
            printf("Usage ");
            set_color_green();
            printf("uptime ");
            set_color_magenta();
            printf("or use ");
            set_color_green();
            printf("uptime -o ");
            set_color_magenta();
            printf("to output usage as txt file.\n ");
            reset_color();
            return;
        }
    }
    
    
}
int get_number_of_machine_users(){
    struct passwd *p;
    int nr_of_users=0;
    while((p = getpwent())) {
        if((int)(p->pw_uid)>1000)nr_of_users++;
    }
    return nr_of_users;
}

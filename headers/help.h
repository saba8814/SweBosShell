void display_help(char* helper, char* command);
void display_help(char* helper, char* command){
    substring(helper,command,5,MAX_INPUT);
    if(strlen(helper) == 0){
        set_color_magenta();
        printf("Availiable commands in ");
        set_color_blue();
        printf("Swe");
        set_color_yellow();
        printf("Bos");
        reset_color();
        printf("Shell\n");
        set_color_magenta();
        printf("ls - lists all files in the current directory except for hidden files \n");
        printf("mkdir - allows users to create or make new directories \n");
        printf("sl - displays small animation \n");
        printf("uptime - returns information about how long your system has been running together with the current time, number of users with running sessions, and the system load averages for the past 1, 5, and 15 minutes.\n");
        set_color_yellow();
        printf("Use help [command] to get deatiled usage of each command -\n");
    }
    else{
        if(strncmp(helper,"ls",2)==0)
        {
            set_color_magenta();
            printf("Usage ");
            set_color_green();
            printf("ls ");
            set_color_magenta();
            printf("[path relative to root dir] \n");
            reset_color();
            return;
        }  
        if(strncmp(helper,"uptime",6)==0)
        {
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
        if(strncmp(helper,"mkdir",5)==0){
            set_color_magenta();
            printf("Usage ");
            set_color_green();
            printf("mkdir ");
            set_color_magenta();
            printf("[name of directory to create] \n");
            reset_color();
            return;

        } 
        if(strncmp(helper,"sl",2)==0){
            set_color_magenta();
            printf("Usage ");
            set_color_green();
            printf("sl ");
            set_color_magenta();
            printf("or use ");
            set_color_green();
            printf("sl -noanim ");
            set_color_magenta();
            printf("to display message without animation (suitable for low spec PCs).\n ");
            reset_color();
            return;
        }
        set_color_red();
        printf("Command not found use ");
        set_color_yellow();
        printf("help");
        set_color_red();
        printf(" to see list of all availiable commands.");
        reset_color();

    }
}
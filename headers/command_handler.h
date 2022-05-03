void display_shell(char* command,char* machine_name,char* username);
void display_error(char* error);
int check_valid_command(char* command);


void display_shell(char* command,char* machine_name,char* username){
    set_color_green();
    printf("\n%s",machine_name);
    reset_color();
    set_color_yellow();
    printf("@");
    reset_color();
    set_color_red();
    printf("%s:~$ ",username);
    reset_color();
    fgets(command, MAX_INPUT, stdin);
    command[strcspn(command, "\n")] = 0;
}

int check_valid_command(char* command){
    if(strncmp(command,"ls",2)==0||strncmp(command,"mkdir",5)==0||strncmp(command,"sl",2)==0||strncmp(command,"uptime",6)==0 || strncmp(command,"help",4)==0)return 1;
    return 0;
}

void display_error(char* error){
    set_color_red();
    printf("%s: command not found", error);
    reset_color();
}




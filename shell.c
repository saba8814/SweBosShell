#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <time.h>
#include <sys/sysinfo.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <pwd.h>
#include <errno.h>
#include <dirent.h>
#include "headers/colors.h"
#include "headers/command_handler.h"
#include "headers/mkdir.h"
#include "headers/help.h"
#include "headers/uptime.h"
#include "headers/sl.h"
#include "headers/ls.h"



int main(){
    char machine_name[HOST_NAME_MAX];
    char username[LOGIN_NAME_MAX];
    char command[MAX_INPUT];
    char folder_name[MAX_INPUT];
    char helper[MAX_INPUT];
    char flag[MAX_INPUT];

    read_machine_data(machine_name,username);
    while(1)
    {
        display_shell(command,machine_name,username);
        if(check_valid_command(command)){
            if(strncmp(command,"uptime",6)==0) display_uptime(flag,command);
            if(strncmp(command,"sl",2)==0) display_sl(flag,command);
            if(strncmp(command,"mkdir",5)==0) create_directory(folder_name,command);
            if(strncmp(command,"ls",2)==0) display_ls(folder_name,command);
            if(strncmp(command,"help",4)==0) display_help(helper,command);
        }
        else{
            display_error(command);
        }
              
    }
    return 0;
}






 

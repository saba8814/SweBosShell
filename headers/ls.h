void display_ls(char* folder_name, char* command);
void display_ls(char* folder_name, char* command){
    substring(folder_name,command,3,MAX_INPUT);
    DIR *d;
    struct dirent *dir;
    
    if(strlen(folder_name) == 0){
        d = opendir(".");
    }else{
        char directory_to_open[MAX_INPUT]="../../../";
        int i;
        strcat(directory_to_open,folder_name);
        d = opendir(directory_to_open);
    }
    set_color_yellow();
    if (d) {
        while ((dir = readdir(d)) != NULL) {
        printf("%s\n", dir->d_name);
        }
        closedir(d);
    }
    reset_color();
}
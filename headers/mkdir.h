char* substring(char *destination, const char *source, int beg, int n);
void create_directory(char* folder_name, char* command);

char* substring(char *destination, const char *source, int beg, int n)
{
    while (n > 0)
    {
        *destination = *(source + beg);
 
        destination++;
        source++;
        n--;
    }

    *destination = '\0';
    return destination;
}

void create_directory(char* folder_name,char* command){
    substring(folder_name,command,6,MAX_INPUT);
    if(mkdir(folder_name, S_IRWXU | S_IRWXG | S_IRWXO) == -1){
        set_color_red();
        printf("Error: %s\n", strerror(errno));
        reset_color();
    } 
    else{
        set_color_green();
        printf("Directory ");
        reset_color();
        set_color_yellow();
        printf("%s ", folder_name);
        reset_color();
        set_color_green();
        printf("succesfully created");
        reset_color();
    }
}
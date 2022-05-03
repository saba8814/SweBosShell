#include <time.h>
void delay(int number_of_seconds);
void display_sl();
char* substring(char *destination, const char *source, int beg, int n);

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
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = (CLOCKS_PER_SEC/1000) * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}
const char image[] =
    "           ^                                   ^    \n\
          /^\\   \033[0;34m######\033[1;33mOO\033[0;34m####################\033[0m  /^\\   \n\
          |-|   \033[0;34m######\033[1;33mOO\033[0;34m####################\033[0m  |-|   \n\
          | |   \033[0;34m######\033[1;33mOO\033[0;34m####################\033[0m  | |   \n\
          |I|   \033[0;34m######\033[1;33mOO\033[0;34m####################\033[0m  |I|   \n\
          |B|   \033[1;33m0OOOOOOOOOOOOOOOOOOOOOOOOOO0\033[0m  |B|   \n\
          |U|   \033[0;34m######\033[1;33mOO\033[0;34m####################\033[0m  |U|   \n\
          | |   \033[0;34m######\033[1;33mOO\033[0;34m####################\033[0m  | |   \n\
         /| |\\  \033[0;34m######\033[1;33mOO\033[0;34m####################\033[0m /| |\\   \n\
        / | | \\ \033[0;34m######\033[1;33mOO\033[0;34m####################\033[0m/ | | \\   \n\
       |  | |  |                           |  | |  |   \n\
        `-\"\"\"-`                             `-\"\"\"-`   \n\
        \033[0;34mIBU \033[0mGOES WORLDWIDE \033[1;31m<3\033[0m GREETINGS FROM SWEDEN";
void display_sl(char* flag, char* command){
    substring(flag,command,3,MAX_INPUT);
    if(strcmp(flag,"-noanim")==0){
        printf("%s",image);
    }
    else{
    
    if(strcmp(flag,"")==0)
    {
    int jumpControlAtBottom = 0;
    const int someDelay = 6500;
    int shifControl = 0;


    for (jumpControlAtBottom = 0; jumpControlAtBottom < 16; ++jumpControlAtBottom)
    {
        printf("\n");
    }

    fputs(image,stdout);

    for (shifControl = 0; shifControl < 8; ++shifControl)
    {
        delay(120);
        printf("\n");
    }
    }
    else{
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
    }
    }
}
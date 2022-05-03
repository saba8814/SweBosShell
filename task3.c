#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
#include "headers/colors.h"
#include "headers/forkexample.h"
#include "headers/vforkexample.h"
#include "headers/forkbomb.h"
#include "headers/execexample.h"
#include "headers/waitexample.h"
#include "headers/sl.h"
#include "headers/exelclexample.h"
#include "headers/command_handler_task3.h"


int main()
{
    char input;
    display_menu();
    while (1)
    {    
        scanf("%c",&input);
        handle_input(input);
    }
    
    return 0;
}

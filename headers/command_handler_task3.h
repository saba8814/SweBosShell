void display_menu();
void handle_input(char input);
void display_menu(){
    printf("Please choose one of the options given below\n");
    printf("1 - fork() demonstration\n");
    printf("2 - wait() demonstration\n");
    printf("3 - exec() demonstration\n");
    printf("4 - vfork() demonstration\n");
    printf("5 - execl() demonstration\n");
    printf("6 - forkbomb demonstration\n");  
    printf("x - exit program\n");

}

void handle_input(char input){
    char confirmation_input;
    switch (input)
    {
    case '1':
        forkexample();
        display_menu();
        break;
    case '2':
        waitexample();
        display_menu();
        break;
    case '3':
        set_color_red();
        printf("Are you sure you want to run exec example [Y/n]? \n");
        scanf(" %c", &confirmation_input);
        reset_color();
        if(confirmation_input=='Y') execexample();
        display_menu();
        break;
    case '4':
        vforkexample();
        display_menu();
        break;
    case '5':
        set_color_red();
        printf("Are you sure you want to run exec example [Y/n]? \n");
        scanf(" %c", &confirmation_input);
        reset_color();
        if(confirmation_input=='Y') execlexample();
        display_menu();
        break;
    case '6':
        set_color_red();
        printf("Are you sure you want to run forkbomb example this will cause Your PC to crash [Y/n]? \n");
        scanf(" %c", &confirmation_input);
        reset_color();
        if(confirmation_input=='Y') forkbomb();;
        display_menu();
        break;
    case 'x':
        set_color_green();
        printf("You've succesfully exited!\n");
        reset_color();
        exit(1);
        break;
    default:
        set_color_red();
        if(input!='\n'){
            printf("Wrong input try again!");
        }
        reset_color();
        break;
    }
}
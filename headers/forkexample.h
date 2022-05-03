void forkexample();
void forkexample(){
    
    int x = 1;
  
    if (fork() == 0)
    {
        set_color_yellow();
        printf("Child has x = %d\n", ++x);
        reset_color();
    }
    else{
        set_color_yellow();
        printf("Parent has x = %d\n", --x);
        reset_color();
    }

}
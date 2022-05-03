void vforkexample();
void vforkexample(){
    int x = 1;
  
    if (vfork() == 0)
    {
        set_color_yellow();
        printf("Child has x = %d\n", ++x);
        reset_color();
        exit(0);
    }
    else
    {
        set_color_yellow();
        printf("Parent has x = %d\n", --x);
        reset_color();
    }
}
 
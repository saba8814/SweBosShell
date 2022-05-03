void waitexample();
void waitexample()
{
    int i, stat;
    pid_t pid[10];
    for (i=0; i<10; i++)
    {
        if ((pid[i] = fork()) == 0)
        {
            sleep(1);
            exit(100 + i);
        }
    }
 
    for (i=0; i<10; i++)
    {
        pid_t cpid = waitpid(pid[i], &stat, 0);
        set_color_yellow();
        if (WIFEXITED(stat))
            printf("Child %d terminated with exit status code of: %d\n",
                   cpid, WEXITSTATUS(stat));
    }
    reset_color();
}
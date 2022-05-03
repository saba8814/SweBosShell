void execexample();
void execexample()
{
    char *args[]={"./shell",NULL};
    execvp(args[0],args);
}
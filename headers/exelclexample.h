void execlexample();
void execlexample(){
    char *binaryPath = "/bin/ls";
    char *arg1 = "-lh";
    char *arg2 = "/home";
    execl(binaryPath, binaryPath, arg1, arg2, NULL);
}
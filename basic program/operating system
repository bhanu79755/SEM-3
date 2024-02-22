#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
    pid_t pid;
    pid=fork();
    if(pid<0)
    {
        fprintf(stderr,"fork failed");
        return 1;
    }

else if(pid==0)
{
    execlp("/bin/ls/","Is",NULL);
}
else{
    wait(NULL);
    printf("child completed\n");
}
return 0;
}
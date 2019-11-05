#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("PID is:%d\n",getpid());
    printf("PPID is:%d\n",getppid());
    return 0;
}


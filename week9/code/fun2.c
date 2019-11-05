#include<stdio.h>
#include<unistd.h>
int main()
{
	char *args[] = {"user/bin/vim",NULL};
	printf("PID is:%d\n",getpid());
	if(execve("/user/bin/vim",args,NULL)<0)
		perror("execve creat is falut");
	return 1;
}

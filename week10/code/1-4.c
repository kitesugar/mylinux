#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int g=88;
int main()
{
	int v=99;
	pid_t pid;
	pid = vfork();
	if(pid<0)
	{
		perror("vfork failed!\n");
		exit(-1);
	}
	else if(pid==0)
	{
		g++;
		v++;
		printf("child:pig=%d,g=%d,v=%d",getpid(),g,v);
		return 0;
	}
	printf("pid =%d,g=%d,v=%d\n",getpid(),g,v);
	return 0;
}

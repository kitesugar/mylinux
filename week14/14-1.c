#include "my.h"
void *create(void *arg)
{
	printf("thread pid = %d\n",getpid());
} 
int main()
{
	pthread_t tidp;
	int error;
	error=pthread_create(&tidp,NULL,create,NULL);
	if(error!=0)
	{
		printf("pthread_create is not created...");
		return -1;
	}
	printf("pthread_create is created...");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#define SIZE 512
int main(int argc,char *argv[])
{
	char buf[SIZE];
	if(setvbuf(stdin,buf,_IONBF,SIZE)!=0)
	{
		perror("failed\n");
		return 1;
	}
	printf("input stdin config");
	printf("type");
	if(stdin->_flags & _IO_UNBUFFERED)
	{
		printf("no fflush\n");
	}
	else if (stdin->_flags	& _IO_LINE_BUF)
	{
		printf("line fflush\n");
	}
	else{
		printf("full fflush\n");
	}
	printf("file size %ld\n",stdin->_IO_buf_end - stdin->_IO_buf_base);
	printf("file content %d\n",fileno(stdin));
	if(setvbuf(stdin,buf,_IOFBF,SIZE)!=0)
	{
		printf("stdin set failed\n");
		return 2;
	}
	printf("stdin type sucessed!\n");
	printf("file type:\n");
	if(stdin->_flags & _IO_UNBUFFERED)
	{
		printf("no fflush\n");
	}
	else if(stdin->_flags & _IO_LINE_BUF)
	{
		printf("line fflush");
	}
	else
	{
		printf("full fflush");
	}
	printf("fflush size is:%ld\n",stdin->_IO_buf_end - stdin->_IO_buf_base);
	printf("file content%d\n",fileno(stdin));
	return 0;

}

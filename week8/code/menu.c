#include "lib.h"

void Quit() //0. 退出
{
    exit(0);
}

void CreateFile() //1. 创建新文件
{
    int fp;
    if( ( fp = open( "/home/mylinux/week8/code/haohao.c", O_CREAT | O_TRUNC | O_RDWR, 0666 ) ) < 0 )
    {
        perror( "open" );
    }
    else
    {
        printf( "Create file:haohao.c\n" );
    }
    getchar();
    if( close( fp ) < 0 )
    {
        perror( "close" );
    }
    else
    {
        printf( "Close file:haohao.c\n" );
    }
}



void WriteInFile() //2. 写文件
{
    int fp;
    char buf[1024];
    if( ( fp = open( "/home/mylinux/week8/code/haohao.c", O_CREAT | O_APPEND | O_RDWR, 0666 ) ) < 0 )
    {
        perror( "open" );
    }
    else
    {
        printf( "Open file:haohao.c\n" );
    }
    printf( "Please input your data( < 1024 bytes ) :\n" );
    scanf( "%s", buf );
    if( write( fp, buf, strlen( buf ) ) < 0 )
    {
        perror( "write" );
    }
    else
    {
        printf( "Written Success!\n" );
    }
    getchar();
    if( close( fp ) < 0 )
    {
        perror( "close" );
    }
    else
    {
        printf( "Close file:haohao.c\n" );
    }
}



void ReadInFile() //3. 读文件
{
    int fp;
    char *buf;
    int front, rear;
    if( ( fp = open( "/home/mylinux/week8/code/haohao.c", O_RDWR, 0666 ) ) < 0 )
    {
        perror( "open" );
    }
    else
    {
        printf( "Open file:haohao.c\n" );
    }
    getchar();
    rear = lseek( fp, 0, SEEK_END );
    front = lseek( fp, 0, SEEK_SET );      //设置文件指针位置
    front = rear - front;
    buf = ( char * ) malloc( front );
    if( read( fp, buf, front+1 ) < 0 )
    {
        perror( "read" );
    }
    else
    {
        printf( "Read Success!\n" );
    }
    printf( "%s\n", buf );
    getchar();
    if( close( fp ) < 0 )
    {
        perror( "close" );
    }
    else
    {
        printf( "Close file:haohao.c\n" );
    }
}

void AlterFileAuthority() //4. 修改文件权限
{
    int n;
	printf( "0. 读，写，执行 1. 读 2. 写 3. 执行\n" );
	printf( "Please Input Your Choice:" );
	scanf( "%d",&n );
	switch( n )
	{
        case 0 : chmod( "/home/mylinux/week8/code/haohao.c", S_IRWXU ); break;    //读，写，执行
		case 1 : chmod( "/home/mylinux/week8/code/haohao.c", S_IRUSR ); break;    //读
		case 2 : chmod( "/home/mylinux/week8/code/haohao.c", S_IWUSR ); break;    //写
		case 3 : chmod( "/home/mylinux/week8/code/haohao.c", S_IXUSR ); break;    //执行
		default: printf( "You have a wrong choice!\n" );
	}
}
void ViewFileAuthority() //5. 查看文件权限
{
    char *path = "/bin/ls";
	char *argv[4] = {"ls", "-l", "/home/mylinux/week8/code/haohao.c", NULL};
    execv( path,argv );	//执行ls –l jiangfeng.c
}


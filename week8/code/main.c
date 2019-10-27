#include "lib.h"
int main()
{
    int n;
    while( 1 )
    {
        printf( "0. 退出\n1. 创建新文件\n2. 写文件\n3. 读文件\n" );
        printf( "5. 修改文件权限\n6. 查看文件权限\n" );
       
        printf( "Please Input Your Choice:" );
        scanf( "%d", &n );
        switch ( n )
        {
            case 0 : Quit(); break;
            case 1 : CreateFile(); break;
            case 2 : WriteInFile(); break;
            case 3 : ReadInFile(); break;
            case 5 : AlterFileAuthority(); break;
            case 6 : ViewFileAuthority(); break;
            
            default: printf( "You have a wrong choice!\n" );
        }
        printf( "\n" );
    }
    return 0;
}


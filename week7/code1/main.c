#include "uhead.h"
int main ()
{
	int n;
	int j = 1; 
	printf ("*********************MENU*********************\n");
	printf("0.退出\n1.创建新文件\n2.写文件\n3.读文件\n");
	ptintf("4.修改文件权限\n5.查看当前文件权限\n");
	printf ("**********************************************\n"); 
	while(j)
	{
		printf("Please input your choice(0-5)\n");
		scanf("%d",&n);
		switch(n)
		{
			case 0:j = 0;break;
			case 1:CreateFile();break;
			case 2:WritelnFile();break;
			case 3:ReadlnFile();break;
			case 4:AlterFileAuthority();break;
			case 5:ViewFileAuthority();break;
			default: printf("You have a wrong choice\n");
		}
		printf("\n");
	}
	return 0;
}


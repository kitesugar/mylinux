#include"uhead.h"
int CreateFile()
{
	FILE *fp;
	char filename[STR_SIZE];

	printf("文件名: ");
	gets(filename);

	if((fp = fopen(filename, "r")) == NULL)
	{
		if((fp = fopen(filename, "w+")) == NULL)
		{
			printf("文件创建失败\n");
			return -1;
		}
		else
		{
			printf("文件创建成功\n");
			fclose(fp);
			return 0;
		}
	}
	else
	{
		printf("文件已存在\n");
		fclose(fp);
		return -1;
	}
}


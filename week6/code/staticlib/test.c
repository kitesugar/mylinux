#include "mylib.h"
#include <stdio.h>
int main()
{
	int a[5]={54,89,-67,789,123};
	show(a,5);
	printf("max=%d\n",max(a,5));
	printf("sum=%d\n",sum(a,5));
	return 0;
}

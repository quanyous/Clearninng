#include <stdio.h>
#include <malloc.h> 
int main()
{
	int a[5];
	int len;
	int *parr;
	
	//构造动态一维数组 
	printf("请输入你要存放的元素个数：");
	scanf("%d",&len);
	parr = (int *)malloc(4* len); 
	int i;
	for(i=0;i<len;i++)
		scanf("%d",&parr[i]);
	for(i=0;i<len;i++)
		printf("%d\n",parr[i]);	
	//realloc(parr,100);	            改变指向字节 
	free(parr);	
	return 0;
 } 

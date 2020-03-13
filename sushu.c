#include <stdio.h>
int main()
{
	int i,k,j;
	
	printf("请输入一个大于2的数字："); 
	scanf("%d",&i);
	for(k=2;k<i;k++)
	{
		j=i%k;
		if(j==0)
		{
			printf("不是素数\n");
			k=i;
		}				
	}
	if(j!=0)
		printf("%d是素数\n",i);
		return 0;
}

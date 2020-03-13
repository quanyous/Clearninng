#include <stdio.h>

int main()
{
	int i;
	char ch;
	 
	scanf("%d",&i);
	
	printf("i = %d\n", i);
	
	while ((ch=getchar())!='\n') //对用户非法输入处理 
		continue;

	int j;
	scanf("%d",&j);
	printf("j=%d",j);
	return 0;	
 } 

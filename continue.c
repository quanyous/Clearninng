#include <stdio.h>

int main()
{
	int i;
	char ch;
	 
	scanf("%d",&i);
	
	printf("i = %d\n", i);
	
	while ((ch=getchar())!='\n') //���û��Ƿ����봦�� 
		continue;

	int j;
	scanf("%d",&j);
	printf("j=%d",j);
	return 0;	
 } 

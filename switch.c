#include <stdio.h>

int main()
{
	int val;
	printf("dsfsdfs\n");
	scanf("%d",&val);
	
	switch (val)
	{
		case 1:
			printf("一楼开\n"); 
			break;
			
		case 2:
			printf("二楼开\n"); 
			break;
		default:
			printf("还没盖到\n");
			break;
			
	}
	
	return 0;	
 } 

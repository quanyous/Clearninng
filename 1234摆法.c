#include <stdio.h> 
int main()
{
	int i,j,k,amount=0;
	for(i=1;i<5;i++)
		{
		for(j=1;j<5;j++)
		{
			for(k=1;k<5;k++)
			{
				if(j!=i&&j!=k&&k!=i)
				printf("%d%d%d\n",i,j,k);
				amount++;
			}
		}
		}
	printf("总共有%d个数",amount);
	return 0;
}

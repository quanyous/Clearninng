#include <stdio.h>
int main()
{
	int i,k,j;
	
	printf("������һ������2�����֣�"); 
	scanf("%d",&i);
	for(k=2;k<i;k++)
	{
		j=i%k;
		if(j==0)
		{
			printf("��������\n");
			k=i;
		}				
	}
	if(j!=0)
		printf("%d������\n",i);
		return 0;
}

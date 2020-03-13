#include <stdio.h>
int main()
{
	int g,s,b;
	int t;
	scanf("%d",&t);
	b=t/100;
	s=(t%100)/10;
	g=t%10;
	if(g==0&s==0)
		printf("%d",b);
	while(s!=0)		
	{
		if(g==0)
		{
				printf("%d%d",s,b);
			break;}	
		else
		{
		printf("%d%d%d",g,s,b);
		break;}
	}
	return 0;
}

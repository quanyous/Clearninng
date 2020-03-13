#include <stdio.h>
int main()
{
	int  i = 10;
	int *p = &i;
	int **q=&p;
	int ***r = &q;
	
	printf("i = %d",***r);
	return 0;
 } 

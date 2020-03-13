#include <stdio.h>
#include <malloc.h> 
int main()
{
	int a=1;
	int *p=(int *)malloc(4);
	*p =5;
	printf("%d,%d",p,*p);
	return 0;
 } 

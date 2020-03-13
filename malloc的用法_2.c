#include <stdio.h>
#include <malloc.h> 
void f(int *q)
{
	*q=200;
	free(q);
}
int main()
{
	int *p=(int *)malloc(sizeof(int));
	*p =10;
	printf("%d\n",*p);
	f(p);
	printf("%d",*p);
	return 0;
 } 

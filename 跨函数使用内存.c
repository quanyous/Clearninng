#include  <stdio.h>

void f(int ** q)
{
	int i=5;
	*q = &i;
	
}
int main()
{
	int *p;
	printf("%d\n",*p);
	f(&p);
	printf("%d\n",*p); 
	
	return 0;	
 } 

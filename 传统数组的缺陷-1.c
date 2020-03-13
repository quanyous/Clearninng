#include <stdio.h>
void g(int *parr)
{
	parr[2]=88;
}
void f()
{
	int a[5]={1,2,3,4,5};
	g(a);
	printf("%d\n",a[2]);
}
int main()
{
	f();
	return 0;
	
 } 

#include <stdio.h>

void f(int *parr,int len)
{
	parr[3]=88;
}
int main()
{
	int a[5]={0,1,2,3,4};
	printf("a[3]=%d\n",a[3]);
	f(a,5);      //aÊÇint * 
	printf("a[3]=%d",a[3]);
	return 0;
 }

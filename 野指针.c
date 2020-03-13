#include <stdio.h>
int main()
{
	int *p; 
	printf("%p\n",p);
	printf("%d\n",*p);
	int i=3;
	*p=i;
	printf("%d/n%p",*p,&i);
	return 0;
}

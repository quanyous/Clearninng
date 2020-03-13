#include <stdio.h>

int main(void)
{
	int i=4;
	int j=3;
	int *p=&i;
	int *q=&j;
	//p-q没有实际意义
	
	int a[5];
	p=&a[4];
	q=&a[2];
	printf("p和q相隔%d个单元",p-q);
	return 0;
	 
	 
 } 

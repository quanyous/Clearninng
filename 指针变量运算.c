#include <stdio.h>

int main(void)
{
	int i=4;
	int j=3;
	int *p=&i;
	int *q=&j;
	//p-qû��ʵ������
	
	int a[5];
	p=&a[4];
	q=&a[2];
	printf("p��q���%d����Ԫ",p-q);
	return 0;
	 
	 
 } 

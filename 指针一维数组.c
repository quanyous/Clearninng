#include <stdio.h>

void f(int *a,int len)  //f������������κ�һ��һά��������� 
{
	int i =len;
	for(i=0;i<len;i++)
		printf("%d",*(a+i));		//*��a+1��,*(a+2);*(a+3) 
	printf("\n");	
}
int main()
{
	int a[5]={0,1,2,3,4};
	int b[6]={1,2,3,4,5,6};
	int c[100]={55,66,64,22,44,2};
	f(a,5);      //a��int * 
	f(b,6);
	f(c,100);
	return 0;
 }

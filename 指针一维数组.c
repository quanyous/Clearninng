#include <stdio.h>

void f(int *a,int len)  //f函数可以输出任何一个一维数组的内容 
{
	int i =len;
	for(i=0;i<len;i++)
		printf("%d",*(a+i));		//*（a+1）,*(a+2);*(a+3) 
	printf("\n");	
}
int main()
{
	int a[5]={0,1,2,3,4};
	int b[6]={1,2,3,4,5,6};
	int c[100]={55,66,64,22,44,2};
	f(a,5);      //a是int * 
	f(b,6);
	f(c,100);
	return 0;
 }

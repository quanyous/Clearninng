#include <stdio.h>
#include <malloc.h>
void f(int ** q)		
{
	int i=5;
	
	*q = (int *)malloc(sizeof(int));
	//*q=5;   =>>   p=5
	//q=5    =>>    &p=5
	**q=i;     //*p=5;	
}
int main()
{
	int *p;
	f(&p);
	printf("%d\n",*p);  //在main()访问i成功 
		
	
	return 0;	
 }  

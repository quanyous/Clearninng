#include  <stdio.h>

void f(int ** q)		//静态变量不能跨函数使用 
{
	int i=5;
	*q = &i;
	
}
int main()
{
	int *p;
	printf("%d\n",*p);
	f(&p);
	printf("%d\n",*p); 		//逻辑有问题，p可以保存i的地址，但不可以访问i的空间，因为i已经被释放了 devc++能运行 
	
	return 0;	
 } 

#include <stdio.h>

void change1(int a,int b)//不能完成互换功能 ,形式参数不会影响实际参数 
{
	int t;
	t=a;
	a=b;
	b=t;
	return;
} 
void change2(int *p,int *q)//p,q存放的是a,b的地址，函数里交换的是p,q存放的内容 
{
	int *t;
	
	t=p;
	p=q;
	q=t;
 } 
void change3(int *p,int *q)//
{
	int t;	//如果互换ab,就定义int t;但定义int *t也可，只是语法错误 
	
	t=*p;
	*p=*q;
	*q=t;
 }  
int main()
{
	int a=3;
	int b=4;
	//change1(a,b);
	//change2(&a,&b);
	change3(&a,&b); 
	printf("a=%d,b=%d",a,b);
	return 0;
}//互换整型的值，他们的地址不能轻易改变 

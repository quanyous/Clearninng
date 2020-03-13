#include <stdio.h>
void f(int **)
{
	
 } 
 void g();
 {
 	int i = 10;
 	int *p =i;
 	f(&p);   		//p是int * 类型，&p是int **类型 
 }
int main()
{
	g();
	return 0;
 } 

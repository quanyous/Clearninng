#include <stdio.h>
void f(int **)
{
	
 } 
 void g();
 {
 	int i = 10;
 	int *p =i;
 	f(&p);   		//p��int * ���ͣ�&p��int **���� 
 }
int main()
{
	g();
	return 0;
 } 

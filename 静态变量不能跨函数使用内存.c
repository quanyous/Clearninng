#include  <stdio.h>

void f(int ** q)		//��̬�������ܿ纯��ʹ�� 
{
	int i=5;
	*q = &i;
	
}
int main()
{
	int *p;
	printf("%d\n",*p);
	f(&p);
	printf("%d\n",*p); 		//�߼������⣬p���Ա���i�ĵ�ַ���������Է���i�Ŀռ䣬��Ϊi�Ѿ����ͷ��� devc++������ 
	
	return 0;	
 } 

#include <stdio.h>

void change1(int a,int b)//������ɻ������� ,��ʽ��������Ӱ��ʵ�ʲ��� 
{
	int t;
	t=a;
	a=b;
	b=t;
	return;
} 
void change2(int *p,int *q)//p,q��ŵ���a,b�ĵ�ַ�������ｻ������p,q��ŵ����� 
{
	int *t;
	
	t=p;
	p=q;
	q=t;
 } 
void change3(int *p,int *q)//
{
	int t;	//�������ab,�Ͷ���int t;������int *tҲ�ɣ�ֻ���﷨���� 
	
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
}//�������͵�ֵ�����ǵĵ�ַ�������׸ı� 

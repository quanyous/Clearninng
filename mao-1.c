#include <stdio.h>
 
void bag(int *p,int j)
{
	int temp,i,s;
		s=1;
		while(s)
		{					
		for(i=0;i<j;i++)	//����λ��ѭ�� 
		{
			if(*(p+i)>*(p+1+i))
				{
				temp=*(p+i);
				*(p+i)=*(p+1+i);
				*(p+1+i)=temp;
				}					
		}
		j--;
		if(j==1)
		s=0;

		}	
}
void main()
{
	int a[10];
	int n= 10;
	int i;
	printf("���������һ�����֣�(�س�ȷ��һ������)\n");
	for (i=0;i<10;i++)
		scanf("%d",&a[i]);
	int b,j;
	j=n;
	printf("�������������Ϊ�� ") ; 
	for (b = 0; b < n; b++)
        printf("%d%s", a[b], b == n - 1 ? "\n" : " ");//��Ŀ���з������"b==n-1"Ϊ�棬����ʽȡ"\n"ֵ������ȡ" "ֵ
	bag(a,j);
	printf("��С��������������Ϊ�� ")	;
	for (b = 0; b < n; b++)
        printf("%d%s", a[b], b == n - 1 ? "\n" : " ");
        system("pause");
        return 0;
 } 

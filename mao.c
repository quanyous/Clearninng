#include <stdio.h>
 
void bag(int *a)
{
	int temp,i,s;
		s=1;
		int j=9;
		while(s)
		{					
		for(i=0;i<j;i++)	//����λ��ѭ�� 
		{
			if(a[i]>a[i+1])
				{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
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
	printf("���������10�����֣�(�س�ȷ��һ������)\n");
	for (i=0;i<10;i++)
		scanf("%d",&a[i]);
	int b,j;
	j=n;
	printf("�������������Ϊ�� ") ; 
	for (b = 0; b < n; b++)
        printf("%d%s", a[b], b == n - 1 ? "\n" : " ");//��Ŀ���з������"b==n-1"Ϊ�棬����ʽȡ"\n"ֵ������ȡ" "ֵ
	bag(a);
	printf("��С��������������Ϊ�� ")	;
	for (b = 0; b < n; b++)
        printf("%d%s", a[b], b == n - 1 ? "\n" : " ");
        system("pause");
    return 0;
 } 

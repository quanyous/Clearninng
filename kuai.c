#include <stdio.h>
void tank(int a[],int n)
{
	int i,k,temp;
	for(k=0;k<n-1;k++)
	{
	
		for(i=k+1;i<n+1;i++)//i=0;
		{
			if(a[k]>a[i])
			{
				temp=a[k];
				a[k]=a[i];
				a[i]=temp;
			}
			
				
				
		}
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
        printf("%d%s", a[b], b == n - 1 ? "\n" : " ");//��ľ���з������"b==n-1"Ϊ�棬����ʽȡ"\n"ֵ������ȡ" "ֵ
	tank(a,n);
	printf("��С��������������Ϊ�� ")	;
	for (b = 0; b < n; b++)
        printf("%d%s", a[b], b == n - 1 ? "\n" : " ");
        return 0;
 } 

#include <stdio.h>
#include <malloc.h> 
int main()
{
	int a[5];
	int len;
	int *parr;
	
	//���춯̬һά���� 
	printf("��������Ҫ��ŵ�Ԫ�ظ�����");
	scanf("%d",&len);
	parr = (int *)malloc(4* len); 
	int i;
	for(i=0;i<len;i++)
		scanf("%d",&parr[i]);
	for(i=0;i<len;i++)
		printf("%d\n",parr[i]);	
	//realloc(parr,100);	            �ı�ָ���ֽ� 
	free(parr);	
	return 0;
 } 

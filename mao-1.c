#include <stdio.h>
 
void bag(int *p,int j)
{
	int temp,i,s;
		s=1;
		while(s)
		{					
		for(i=0;i<j;i++)	//交换位置循环 
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
	printf("请随机输入一串数字：(回车确定一个数字)\n");
	for (i=0;i<10;i++)
		scanf("%d",&a[i]);
	int b,j;
	j=n;
	printf("输入的所以数字为： ") ; 
	for (b = 0; b < n; b++)
        printf("%d%s", a[b], b == n - 1 ? "\n" : " ");//三目换行符：如果"b==n-1"为真，则表达式取"\n"值，否则取" "值
	bag(a,j);
	printf("从小到大排序后的数字为： ")	;
	for (b = 0; b < n; b++)
        printf("%d%s", a[b], b == n - 1 ? "\n" : " ");
        system("pause");
        return 0;
 } 

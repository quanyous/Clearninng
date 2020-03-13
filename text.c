#include <stdio.h>
 
void bag(int *a,int j)
{
	int temp,i,s;
		s=1; j=10;
		while(s)
		{					
		for(i=1;i<j;i++)	//交换位置循环 
		{
			if(a[i-1]>a[i])
				{
				temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
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
	printf("请随机输入10个数字：(回车确定一个数字)\n");
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

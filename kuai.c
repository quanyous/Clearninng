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
	printf("请随机输入10个数字：(回车确定一个数字)\n");
	for (i=0;i<10;i++)
		scanf("%d",&a[i]);
	int b,j;
	j=n;
	printf("输入的所以数字为： ") ; 
	for (b = 0; b < n; b++)
        printf("%d%s", a[b], b == n - 1 ? "\n" : " ");//三木换行符：如果"b==n-1"为真，则表达式取"\n"值，否则取" "值
	tank(a,n);
	printf("从小到大排序后的数字为： ")	;
	for (b = 0; b < n; b++)
        printf("%d%s", a[b], b == n - 1 ? "\n" : " ");
        return 0;
 } 

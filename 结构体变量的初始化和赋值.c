#include <stdio.h>
struct Student		//结构体 
{
	int age;
	float score;
	char sex;
};

int main()
{
	
	struct Student st ={80,66.6,'F'};//初始化 ，定义的同时赋值
	struct Student st2;
	st2.age = 10;
	st2.score = 88;
	st2.sex = 'S';
	printf("%d,%f,%c\n",st.age,st.score,st.sex); 
	printf("%d,%f,%c\n",st2.age,st2.score,st2.sex); 	
	return 0;
}

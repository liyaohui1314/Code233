#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void test(int b)
{
	int a = 10;
	printf("%d\n", a);
	return;
}

int main01()
{

	//在函数内部定义的变量 成为局部变量
	//数据类型 变量名=值
	//局部变量的作用域和生命周期
	int a = 10;
	printf("%d\n", a);
	//匿名内部函数
	{
		a = 100;
		printf("%d\n", a);
	}
	printf("%d\n", a);

	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{

	//}

	//printf("%d\n", i);

	return EXIT_SUCCESS;
}

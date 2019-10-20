#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//声明其他文件中的函数
void test2();

//在函数外部定义的变量成为全局变量
//作用域 项目中所有文件 如果在其他文件中使用 需要声明
//生命周期 从程序加载到程序结束
//全局变量名可以和局部变量名重名   但是全局变量不能和全局变量重名
//采用就进匹配原则 如果有定义局部变量 优先使用局部变量
int a = 10;

void test1()
{
	printf("%p\n", &a);
	a = 123;
	printf("%d\n", a);
}
int main02()
{
	test2();
	//test1();
	//printf("%p\n", &a);
	//printf("%d\n", a);

	int a = 123;
	printf("%d\n", a);

	return EXIT_SUCCESS;
}

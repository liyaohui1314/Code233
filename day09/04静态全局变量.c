#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//其他文件的函数声明
//void test4();

//在函数外部定义的变量使用static修饰的变量 称为静态全局变量
//static 数据类型 变量名=值
//作用域：只能在定义静态全局变量所在的文件使用
//生命周期：从程序加载到程序结束
static int b=10;

void test5()
{
	b = 123;
	printf("%d\n", b);
}
void test6()
{
	b = 456;
	printf("%d\n", b);
}
int main04()
{
	//test4();
	test5();
	test6();
	return EXIT_SUCCESS;
}

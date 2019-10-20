#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main0301()
{
	//静态局部变量定义
	//在函数内部定义使用static修饰的变量成为静态局部变量
	static int a = 123;
	printf("%d\n", a);
	a = 666;
	printf("%d\n", a);
	return EXIT_SUCCESS;
}

void test3()
{
	//静态局部变量(全局区 初始化数据区)
	//static定义的局部变量只会初始化一次 可以多次赋值
	//作用域：在定义的函数内部
	//生命周期：从程序加载到程序结束
	static int a = 0;
	printf("%p\n", &a);
	a++;
	printf("%d\n", a);
}

int main03()
{
	for (int i = 0; i < 10; i++)
	{
		test3();
	}
	//printf("%d\n", a);
	return 0;
}
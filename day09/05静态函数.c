#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//void test7();

//在函数定义时使用static修饰的函数成为静态函数
//作用域：静态函数只能在定义的文件中使用
//生命周期：从程序加载到程序结束
static void test7()
{
	printf("静态:hello world\n");
}

int main()
{
	test7();

	return EXIT_SUCCESS;
}

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

	//�ں����ڲ�����ı��� ��Ϊ�ֲ�����
	//�������� ������=ֵ
	//�ֲ����������������������
	int a = 10;
	printf("%d\n", a);
	//�����ڲ�����
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

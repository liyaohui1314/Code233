#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main0301()
{
	//��̬�ֲ���������
	//�ں����ڲ�����ʹ��static���εı�����Ϊ��̬�ֲ�����
	static int a = 123;
	printf("%d\n", a);
	a = 666;
	printf("%d\n", a);
	return EXIT_SUCCESS;
}

void test3()
{
	//��̬�ֲ�����(ȫ���� ��ʼ��������)
	//static����ľֲ�����ֻ���ʼ��һ�� ���Զ�θ�ֵ
	//�������ڶ���ĺ����ڲ�
	//�������ڣ��ӳ�����ص��������
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
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//�����ļ��ĺ�������
//void test4();

//�ں����ⲿ����ı���ʹ��static���εı��� ��Ϊ��̬ȫ�ֱ���
//static �������� ������=ֵ
//������ֻ���ڶ��徲̬ȫ�ֱ������ڵ��ļ�ʹ��
//�������ڣ��ӳ�����ص��������
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

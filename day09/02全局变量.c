#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//���������ļ��еĺ���
void test2();

//�ں����ⲿ����ı�����Ϊȫ�ֱ���
//������ ��Ŀ�������ļ� ����������ļ���ʹ�� ��Ҫ����
//�������� �ӳ�����ص��������
//ȫ�ֱ��������Ժ;ֲ�����������   ����ȫ�ֱ������ܺ�ȫ�ֱ�������
//���þͽ�ƥ��ԭ�� ����ж���ֲ����� ����ʹ�þֲ�����
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

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <vector>
#include <list>


void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++){
		v.push_back(i);
		cout << v.capacity() << endl;  // v.capacity()����������
	}
}

/*
3.2.4.1 vector���캯��
vector<T> v; //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
vector(v.begin(), v.end());//��v[begin(), end())�����е�Ԫ�ؿ���������
vector(n, elem);//���캯����n��elem����������
vector(const vector &vec);//�������캯����

//���� ʹ�õڶ������캯�� ���ǿ���...
int arr[] = {2,3,4,1,9};
vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));

3.2.4.2 vector���ø�ֵ����
assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
assign(n, elem);//��n��elem������ֵ������
vector& operator=(const vector  &vec);//���صȺŲ�����
swap(vec);// ��vec�뱾���Ԫ�ػ�����
*/

void printVector(vector<int>v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	vector<int>v2(v.begin(), v.end());

	printVector(v);
	printVector(v2);

	vector<int>v3(10, 100);
	printVector(v3);

	vector<int>v4;
	v4.assign(v3.begin(), v3.end());
	printVector(v4);

	cout << "v1��v3����ǰ��" << endl;
	printVector(v);
	printVector(v3);

	v.swap(v3);
	cout << "v1��v3������" << endl;
	printVector(v);
	printVector(v3);
}

/*
3.2.4.3 vector��С����
size();//����������Ԫ�صĸ���
empty();//�ж������Ƿ�Ϊ��
resize(int num);//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
resize(int num, elem);//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á����������̣���ĩβ����������>�ȵ�Ԫ�ر�ɾ����
capacity();//����������
reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�

3.2.4.4 vector���ݴ�ȡ����
at(int idx); //��������idx��ָ�����ݣ����idxԽ�磬�׳�out_of_range�쳣��
operator[];//��������idx��ָ�����ݣ�Խ��ʱ������ֱ�ӱ���
front();//���������е�һ������Ԫ��
back();//�������������һ������Ԫ��
*/

void test03()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ��" << endl;
		cout << "size = " << v1.size() << endl;
	}

	v1.resize(15,1000);
	printVector(v1);//����䳤��Ĭ����0���

	v1.resize(3);
	printVector(v1);//�����̣���������ɾ��

	cout << "������" << v1.capacity() << endl;
	
	cout << "��һ��Ԫ��Ϊ�� "<< v1.front() << endl;
	cout << "���һ��Ԫ��Ϊ�� " << v1.back() << endl;
}

/*
3.2.4.5 vector�����ɾ������
insert(const_iterator pos, int count,ele);//������ָ��λ��pos����count��Ԫ��ele.
push_back(ele); //β������Ԫ��ele
pop_back();//ɾ�����һ��Ԫ��
erase(const_iterator start, const_iterator end);//ɾ����������start��end֮���Ԫ��
erase(const_iterator pos);//ɾ��������ָ���Ԫ��
clear();//ɾ������������Ԫ��
*/

void test04()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	v1.insert(v1.begin(), 2,1000);
	printVector(v1);

	v1.push_back(10000); //β��
	printVector(v1);

	v1.pop_back(); //βɾ
	printVector(v1);

	v1.erase(v1.begin()); //�ṩ������
	printVector(v1);

	//v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector(v1);
}

//����swap�����ڴ�
void test05()
{
	vector<int>v;
	for (int i = 0; i < 100000;i++)
	{
		v.push_back(i);
	}

	cout << "v������Ϊ�� " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ�� " << v.size() << endl;


	v.resize(3);

	cout << "v������Ϊ�� " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ�� " << v.size() << endl;

	//�����ڴ�
	vector<int>(v).swap(v);
	cout << "v������Ϊ�� " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ�� " << v.size() << endl;
}

//���� reserve Ԥ���ռ�        reverse��ת
void test06()
{
	vector<int>v;
	
	v.reserve(100000);//Ԥ���ռ䲻���Է���

	int num = 0;
	int *p = NULL;

	for (int i = 0; i < 100000;i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}

	cout << "num = " << num << endl;

}

void test07()
{
	//�������   ���ʱ��㷨
	vector<int>v;
	for (int i = 0; i < 10;i++)
	{
		v.push_back(i);
	}

	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend();it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//����ж�һ�������ĵ����� �Ƿ�֧���������
	vector<int>::iterator itBegin = v.begin();
	//itBegin--; //����++  ����-- �Ѿ�˫�������
	itBegin = itBegin + 3; // ֧���������

	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	list<int>::iterator it2 = L.begin();
	//it2 = it2 + 1; //��֧����Ծ���� ������������ʵ�����

}

int main(){
	test07();


	system("pause");
	return EXIT_SUCCESS;
}
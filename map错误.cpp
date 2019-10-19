class Person
{
public:

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;

};


class Mycompare
{
public:

	bool operator()(const Person& p1,const  Person& p2)
	{
		return p1.m_Age > p2.m_Age;
	}

};


void test04()
{
	map<int, Person, Mycompare>m;

	Person p1("劫", 18);
	Person p2("提莫", 16);
	Person p3("诺克萨斯之手", 28);
	Person p4("亚索", 19);
	Person p5("德莱文", 25);

	m.insert(make_pair(1, p1));
	m.insert(make_pair(2, p2));
	m.insert(make_pair(3, p3));
	m.insert(make_pair(4, p4));
	m.insert(make_pair(5, p5));



	for (map<int, Person, Mycompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key : " << it->first << " value: 姓名： " << it->second.m_Name << " value： 年龄" << it->second.m_Age << endl;
	}   
}

#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<Windows.h>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void show()
	{
		cout << this->m_Name << " " << this->m_Age << endl;
	}
	string m_Name;
	int m_Age;
};

void printVector(vector<Person>&v1)
{
	for (vector<Person>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << it->m_Name << " " << it->m_Age << endl;
	}
}
int main()
{
	vector<Person>v1;

	Person p1("张三", 10);
	Person p2("王五", 30);
	Person p3("李琦", 70);
	Person p4("李四", 20);
	Person p5("三四六",26);

	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);
	v1.push_back(p5);

	/*for_each(v1.begin(),v1.end(),myprint);*/
	printVector(v1);





	system("pause");
	return 0;
}
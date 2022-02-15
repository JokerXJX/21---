#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<stack>

//栈stack
//void test01()
//{
//	//特点：先进后出
//	stack<int>s;
//	//入栈
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//	cout << "栈的大小:" << s.size() << endl;
//	//只要栈不为空，就查看栈顶，并执行出栈
//	while (!s.empty())
//	{
//		//查看栈顶元素
//		cout << "栈顶元素为：" << s.top() << endl;
//		//出栈
//		s.pop();
//	}
//	cout << "栈的大小:" << s.size() << endl;
//}

//队列queue  先进先出
#include<queue>
#include<string>
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
void test01()
{
	//创建队列
	queue<Person>q;
	//准备数据
	Person p1("唐僧", 30);
	Person p2("孙悟空", 999);
	Person p3("猪八戒", 888);
	Person p4("沙僧", 777);
	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	//判断只要队列不为空，查看队头队尾，出队
	cout << "队列大小为：" << q.size() << endl;
	while (!q.empty())
	{
		//查看队头
		cout << "队头元素--姓名:" << q.front().m_Name << " 年龄：" << q.front().m_Age << endl;
		cout << "队尾元素--姓名:" << q.back().m_Name << " 年龄：" << q.back().m_Age << endl;
		//出队
		q.pop();
	}
	cout << "队列大小为：" << q.size() << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
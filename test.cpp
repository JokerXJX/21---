#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<stack>

//ջstack
//void test01()
//{
//	//�ص㣺�Ƚ����
//	stack<int>s;
//	//��ջ
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//	cout << "ջ�Ĵ�С:" << s.size() << endl;
//	//ֻҪջ��Ϊ�գ��Ͳ鿴ջ������ִ�г�ջ
//	while (!s.empty())
//	{
//		//�鿴ջ��Ԫ��
//		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;
//		//��ջ
//		s.pop();
//	}
//	cout << "ջ�Ĵ�С:" << s.size() << endl;
//}

//����queue  �Ƚ��ȳ�
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
	//��������
	queue<Person>q;
	//׼������
	Person p1("��ɮ", 30);
	Person p2("�����", 999);
	Person p3("��˽�", 888);
	Person p4("ɳɮ", 777);
	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	//�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ��β������
	cout << "���д�СΪ��" << q.size() << endl;
	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷԪ��--����:" << q.front().m_Name << " ���䣺" << q.front().m_Age << endl;
		cout << "��βԪ��--����:" << q.back().m_Name << " ���䣺" << q.back().m_Age << endl;
		//����
		q.pop();
	}
	cout << "���д�СΪ��" << q.size() << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
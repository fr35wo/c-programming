#include <iostream>
using namespace std;
class Parent
{
public:
	virtual ~Parent() { cout << "Parent �Ҹ���" << endl; } //Parent Ŭ������ �Ҹ��ڸ� virtual�� �������� ������ 
															//Child�Ҹ��ڴ� ȣ����� �ʴ´�
};
class Child : public Parent
{
public:
	~Child() { cout << "Child �Ҹ���" << endl; }
};
int main()
{
	Parent* p = new Child(); // ���� ����ȯ
	delete p;
}
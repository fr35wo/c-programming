#include <iostream>
using namespace std;
class Parent
{
public:
	virtual ~Parent() { cout << "Parent 소멸자" << endl; } //Parent 클래스의 소멸자를 virtual로 선언하지 않으면 
															//Child소멸자는 호출되지 않는다
};
class Child : public Parent
{
public:
	~Child() { cout << "Child 소멸자" << endl; }
};
int main()
{
	Parent* p = new Child(); // 상향 형변환
	delete p;
}
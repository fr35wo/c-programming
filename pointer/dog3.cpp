#include <iostream>

using namespace std;

class Dog {
private:
	int* pWeight; //weight�� �ּ� �����ִ�
	int* pAge;	//age�� �ּ� �����ִ�.
public:
	Dog() {
		pAge = new int{ 1 };
		pWeight = new int{ 10 };
	}
	~Dog() {
		delete pAge;
		delete pWeight;
	}
	int getAge() { return *pAge; } //pAge�� ����Ű�� ������ ����� �� ����
	void setAge(int age) { *pAge = age; } //pAge�� ����Ű�� ������ age����
	int getWeight() { return *pWeight; }
	void setWeight(int weight) { *pWeight = weight; }


};

int main() {

	return 0;
}


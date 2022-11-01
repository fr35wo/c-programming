#include <iostream>

using namespace std;

class Dog {
private:
	int* pWeight; //weight의 주소 갖고있다
	int* pAge;	//age의 주소 갖고있다.
public:
	Dog() {
		pAge = new int{ 1 };
		pWeight = new int{ 10 };
	}
	~Dog() {
		delete pAge;
		delete pWeight;
	}
	int getAge() { return *pAge; } //pAge가 가리키는 공간에 저장된 값 리턴
	void setAge(int age) { *pAge = age; } //pAge가 가리키는 공간에 age넣음
	int getWeight() { return *pWeight; }
	void setWeight(int weight) { *pWeight = weight; }


};

int main() {

	return 0;
}


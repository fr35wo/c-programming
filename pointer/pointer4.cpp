#include<iostream>
using namespace std;

class Dog {
private:
	int* pWeight; //멤버 동적 생성
	int* pAge;
public:
	Dog() {
		pAge = new int(1);
		pWeight = new int(10);
	}
	~Dog() {
		delete pAge;
		delete pWeight;
	}
	int getAge() { return *pAge; }
	void setAge(int age) { *pAge = age; }
	int getWeight() { return *pWeight; }
	void setWeight(int weight) { *pWeight = weight; }
};

int main()
{
	Dog* pDog = new Dog; //동적 객체 생성 (포인터 pDog가 동적 객체 Dog 가리킨다) 
	cout << "강아지의 나이: " << pDog->getAge() << endl;
	pDog->setAge(5);
	cout << "강아지의 나이: " << pDog->getAge() << endl;
	delete pDog;
	return 0;
}

//도트 연산자는 직접 접근 연산자 내부 멤버에 직접 접근시 사용
//-> 연산자는 간접 접근 연산자 한다리 건너야 원본이 있는 것을 표시

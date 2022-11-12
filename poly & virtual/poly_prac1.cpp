#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void speak() { cout << "Animal speak()" << endl; } //virtual 키워드 이용하여 가상 함수로 정의(멤버 함수에만 사용가능)
};
class Dog : public Animal
{
public:
	int age;
	void speak() { cout << "멍멍" << endl; }
};
class Cat : public Animal
{
public:
	void speak() { cout << "야옹" << endl; }
};
int main()
{
	Animal* a1 = new Dog();
	a1->speak();
	Animal* a2 = new Cat();
	a2->speak();
	return 0;
}

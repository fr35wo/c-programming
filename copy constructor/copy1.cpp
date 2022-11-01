#include <iostream>
using namespace std;
class Pizza {
	int radius;
public:
	Pizza(int r = 0) : radius{ r } { }
	~Pizza() { }
	void setRadius(int r) { radius = r; }
	void print() { cout << "Pizza(" << radius << ")" << endl; }
};

void upgrade(Pizza p) { p.setRadius(20); }
//1.객체를 함수로 전달하면 값에 의한 호출이 적용되어 
//main()함수의 객체 regular의 내용이 upgrade()의 매개 변수에 객체 p로 복사
//return pizza(10)

void upgrade(Pizza* p) { p->setRadius(20); }
//2.객체의 주소를 함수로 전달하면 객체의 주소가 p에 전달된다.
//return Pizza(20)

void upgrade(Pizza& pizza) { pizza.setRadius(20); }
//3.참조 매개 변수 사용하기
//앞 포인터와 동일한 효과지만 훨씬 알아보기 쉽다.
//참조자를 통하여 원본 객체 변경(pizza에 별명 붙혀주기)

int main() {
	Pizza obj(10);
	//1 upgrade(obj); 
	//2 upgrade(&obj); 
	//3 upgrade(obj);
	obj.print();
	return 0;
}
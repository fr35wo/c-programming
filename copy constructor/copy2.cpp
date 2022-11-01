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

Pizza createPizza() //pizza객체 반환
{
	Pizza p(10); //객체 p 복사하여 반환 객체 생성 이때 복사 생성자 호출
	return p;	//이 반환객체가 main() 함수에서 객체 obj로 대입
}

int main() {
	Pizza obj;
	obj = createPizza();
	obj.print();
	return 0 ;
}
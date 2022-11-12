#include <iostream>
#include <string>
using namespace std;

class Box
{
private:
	double length, width, height;
public:
	Box(double l = 0.0, double w = 0.0, double h = 0.0)
		: length{ l }, width{ w }, height{ h } { }
	void display() {
		cout << "(" << length << ", " << width << ", " << height
			<< ")" << endl;
	}
	//=연산자(대입연산자)의 중복 정의. 참조자를 반환하여야 한다.
	Box& operator=(const Box& b2) {	
		this->length = b2.length;
		this->width = b2.width;
		this->height = b2.height;
		return *this;
	}
};
int main()
{
	Box b1(30.0, 30.0, 60.0), b2;
	b1.display();
	b2 = b1;
	b2.display();
	return 0;
}
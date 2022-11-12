//연산자 중복을 이용하면 특정 클래스에 적합한 연산자의 의미를 정의 가능
#include <iostream>
#include <string>
using namespace std;

class MyVector
{
private:
	double x, y;
public:
	MyVector(double x = 0.0, double y = 0.0) : x{ x }, y{ y } { }
	string toString() {
		return "(" + to_string(x) + ", " + to_string(y) + ")";
	}
	MyVector operator+(const MyVector& v2);
};
MyVector MyVector::operator+(const MyVector& v2) //연산자 중복 정의 (매개 변수는 참조자로 정의한다.)
{
	MyVector v;
	v.x = this->x + v2.x;
	v.y = this->y + v2.y;
	return v;
}
int main()
{
	MyVector v1(1.0, 2.0), v2(3.0, 4.0);
	MyVector v3 = v1 + v2;
	cout << v1.toString() << "+" << v2.toString() << "=" <<
		v3.toString() << endl;
	return 0;
}
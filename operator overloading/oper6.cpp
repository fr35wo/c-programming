//MyVector 객체 에서도 <<연산자가 동작되도록 할 수 있다.

#include <iostream>
using namespace std;
class MyVector
{
private:
	double x, y;
public:
	MyVector(double xvalue = 0.0, double yvalue = 0.0) : x(xvalue),
		y(yvalue) { }
	friend ostream& operator<<(ostream& os, const MyVector& v) { //<< 연산자 중복정의. ostream 참조자 반환.
		os << "(" << v.x << "," << v.y << ")" << endl;
		return os;
	}
};
int main()
{
	MyVector v1(1.0, 2.0), v2(3.0, 4.0), v3;
	cout << v1 << v2 << v3;
	return 0;
}

//연산자 중복 시 유의점

//새로운 연산자를 만드는 것은 허용되지 않는다. 예를 들어서 지수승을 나타내기 위하여^ 연산자를 새롭게 정의할 수 없다.

// 거의 모든 연산자가 중복이 가능하다.하지만 ::연산자, .*연산자, .연산자, ? : 연산자는 중복이 불가능하다.

// 연산자들의 우선순위나 결합 법칙은 변경되지 않는다.

// 만약 + 연산자를 중복하였다면 일관성을 위하여 - , +=, -=연산자도 중복하는 것이 좋다.

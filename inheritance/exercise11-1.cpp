//Point 클래스를 상속받아서 ThreeDPoint 클래스를 정의해보자.
//ThreeDPoint 클래스는 3차원 공간 상의 점을 나타내고 int z; 멤버 변수를 추가로 가진다.

//+ 연산자를 중복 정의하여서 다음과 같은 연산이 가능하도록 하라.

#include <iostream>
using namespace std;

class Point {
protected:
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}
};

class ThreeDPoint : public Point {
	int z;
public:
	ThreeDPoint() : Point(x, y), z(z) { x = 0; y = 0; z = 0; }
	ThreeDPoint(int x, int y, int z) : Point(x, y), z(z) {}
	void print() {
		cout << "(" << getX() << "," << getY() << "," << getZ() << ")" << endl;
	}

	int getX() { return x; }
	int getY() { return y; }
	int getZ() { return z; }
	void setX(int x) { x = x; }
	void setY(int y) { y = y; }
	void setZ(int z) { z = z; }

	ThreeDPoint operator+(const ThreeDPoint& p2) {
		ThreeDPoint p;
		p.x = this-> x + p2.x;
		p.y = this->y + p2.y;
		p.z = this->z + p2.z;
		return p;
	}

};

int main() {
	ThreeDPoint p1(10, 10, 10);
	ThreeDPoint p2(10, 10, 10);
	ThreeDPoint p3;
	p3 = p1 + p2;
	p3.print();
}
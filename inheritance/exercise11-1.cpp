//Point Ŭ������ ��ӹ޾Ƽ� ThreeDPoint Ŭ������ �����غ���.
//ThreeDPoint Ŭ������ 3���� ���� ���� ���� ��Ÿ���� int z; ��� ������ �߰��� ������.

//+ �����ڸ� �ߺ� �����Ͽ��� ������ ���� ������ �����ϵ��� �϶�.

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
//Point Ŭ������ ��ӹ޾Ƽ� ThreeDPoint Ŭ������ �����غ���.
//ThreeDPoint Ŭ������ 3���� ���� ���� ���� ��Ÿ���� int z; ��� ������ �߰��� ������.

//���� ���α׷��� �������� �� �ֵ��� ������, ������, ������ ���� �Լ��� �߰��϶�.

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

};

int main() {
	ThreeDPoint p(10, 10, 10);
	p.print();
}
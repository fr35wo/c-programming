#include <iostream>
#include <memory>
using namespace std;

/*
2. 1�� �ڵ带 ����Ʈ �������� ������ unique_ptr�� ����Ͽ� 
�ٽ� �ۼ��϶�.
*/

class Point {
	int x, y;
public:
	
	Point(int x, int y) : x(x), y(y) {}
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
};

int main() {
	unique_ptr<Point> p(new Point(100,200));
	p->setX(30);
	p->setY(60);
	cout << p->getX() << endl;
	cout << p->getY() << endl;
	return 0;
}
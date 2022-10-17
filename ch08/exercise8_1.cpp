#include <iostream>
using namespace std;

/*
1. Point라는 클래스가 다음과 같이 정의되어 있다고 하자. 
다음 코드 중에서 오류를 찾아 올바르게 수정하라
*/

class Point {
	int x, y;
public:
	Point(int x,int y): x(x), y(y){}
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
};

int main() {
	Point* p = new Point(100, 200);
	p->setX(30);
	p->setY(60);
	cout << p->getX() << endl;
	cout << p->getY() << endl;
	delete p;
	return 0;
}
#include <iostream>
using namespace std;

/*
3. 1번 코드에서 100개의 Point 객체를 저장할 수 있는 동적 객체 배열을 생성하고
	Point객체의 x, y값을 난수로 채워보자.
*/

class Point {
	int x, y;
public:
	Point() : x(0), y(0) {}
	Point(int x, int y) : x(x), y(y) {}
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
};

int main() {
	Point* p;
	p = new Point[100];
	for (int i = 0; i < 100; i++) {
		p[i].setX(rand());
		p[i].setY(rand());
		cout << p[i].getX() << " " << p[i].getY() << endl;		 
	}

	/*
	-> 는 간접 접근 연산자
	해당 변수가 클래스나 구조체등의 포인터 일경우 사용
	해당 변수가 포인터니까 한다리 건너가야 원본이 있다는 것을 표시
	*/
	
	delete p;
	return 0;
}
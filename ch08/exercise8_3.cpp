#include <iostream>
using namespace std;

/*
3. 1�� �ڵ忡�� 100���� Point ��ü�� ������ �� �ִ� ���� ��ü �迭�� �����ϰ�
	Point��ü�� x, y���� ������ ä������.
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
	-> �� ���� ���� ������
	�ش� ������ Ŭ������ ����ü���� ������ �ϰ�� ���
	�ش� ������ �����ʹϱ� �Ѵٸ� �ǳʰ��� ������ �ִٴ� ���� ǥ��
	*/
	
	delete p;
	return 0;
}
#include <iostream>
#include <ctime>

using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return radius * radius * 3.14; }
};

int main() {
	int r;
	int a;
	srand(time(0));
	cout << "생성할 원 개수: " << " ";
	cin >> a;
	Circle *pCircle = new Circle[a]; //Circle형 동적 배열 생성

	for (int i = 0; i < a; i++) {
		r = rand() % 100 + 1;
		cout << "원 " << i + 1 << "의 반지름 >> " << r << endl;
		pCircle[i].setRadius(r);
	}

	int count = 0;
	for (int i = 0; i < a; i++) {
		if (pCircle[i].getArea() > 100) {
			count++;
		}
	}
	cout << count << endl;
}
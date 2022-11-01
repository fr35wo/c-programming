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
	cout << "������ �� ����: " << " ";
	cin >> a;
	Circle *pCircle = new Circle[a]; //Circle�� ���� �迭 ����

	for (int i = 0; i < a; i++) {
		r = rand() % 100 + 1;
		cout << "�� " << i + 1 << "�� ������ >> " << r << endl;
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
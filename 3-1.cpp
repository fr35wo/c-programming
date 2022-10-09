#include <iostream>
using namespace std;
//3-1
//ũ�Ⱑ 3�� Color��ü�� �迭list�� �����غ���. Color��ü�� r,g,b���� 
//������ ���� �ʱ�ȭ�غ���. rand()�Լ��� ����϶�. r,g,b���� 0���� 255������ ���̾�� �Ѵ�.
class Color {
public:
	int r, g, b;
public:
	Color() : r{0}, g{0}, b{0}{}
	Color(int r,int g,int b) : r{r}, g{g}, b{b}{}
	void print() {
		cout << r << " " << g << " " << b << endl;
	}
};

int main() {
	Color list[3];
	for (Color& e : list) {
		e.r = rand() % 255;
		e.g = rand() % 255;
		e.b = rand() % 255;
	}
	for (Color e : list) {
		e.print();
	}
}
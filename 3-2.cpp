#include <iostream>
#include <vector>
using namespace std;
//3-2
//1�� ������ �۾��� ���͸� �̿��Ͽ� �����Ѵ�. �� ���Ϳ� Color��ü 3���� �����Ѵ�.
class Color {
public:
	int r, g, b;
public:
	Color() : r{ 0 }, g{ 0 }, b{ 0 } {}
	Color(int r, int g, int b) : r{ r }, g{ g }, b{ b } {}
	void print() {
		cout << r << " " << g << " " << b << endl;
	}
};

int main() {
	vector<Color> list;
	for (int i = 0; i < 3; i++) {
		Color c{ rand() % 255, rand() % 255, rand() % 255 };
		list.push_back(c);
	}
	for (Color c : list) {
		c.print();
	}
}
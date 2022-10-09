#include <iostream>
#include <vector>
using namespace std;
//3-2
//1과 동일한 작업을 벡터를 이용하여 수행한다. 즉 벡터에 Color객체 3개를 저장한다.
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
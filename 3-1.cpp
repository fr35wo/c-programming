#include <iostream>
using namespace std;
//3-1
//크기가 3인 Color객체의 배열list를 생성해보자. Color객체의 r,g,b값을 
//랜덤한 값을 초기화해보자. rand()함수를 사용하라. r,g,b값은 0에서 255사이의 값이어야 한다.
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
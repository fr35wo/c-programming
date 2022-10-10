
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
//2-2
//사용자로부터 사각형의 폭과 높이 값을 받아서 list배열 안에 저장해보자.
class Rect {
	int w, h;
public:
	Rect() : w{ 0 }, h{ 0 } {}
	Rect(int w, int h) :w{ w }, h{ h } {}
	void print() {
		cout << w << " " << h << endl;
	}
};

int main() {
	Rect list[3];
	int a,b;
	for (int i = 0; i < 3; i++) {
		cin >> a;
		cin >> b;
		list[i] = Rect(a, b);
	}
	for (Rect& e : list)
		e.print();	
}
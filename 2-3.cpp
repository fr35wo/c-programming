#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
//2-3
//벡터 v를 생성하고 사용자로부터 사각형의 폭과 높이 값을 받아서
//벡터 안에 저장 해보자.
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
	vector<Rect> v(3);
	int a, b;
	for (int i = 0; i < 3; i++) {
		cin >> a;
		cin >> b;
		v[i] = Rect(a, b);
	}
	for (Rect& e : v)
		e.print();

}
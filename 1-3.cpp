#include <iostream>
#include <string>
using namespace std;
//1-3
//배열 b의 모든 요소를 출력하는 범위기반 루프를 작성하여 보자.
//필요하면 클래스 Test에 멤버 함수를 추가시킨다.

class Test {
	int x;
public:
	Test() { x = 0; cout << x << " "; }
	Test(int x) : x{ x } {}
	void print() {
		cout << x << " ";
	}
};
int main() {
	Test b[2] = { Test(1),Test(2) };
	
	for (Test& e : b)
		e.print();
	return 0;
}
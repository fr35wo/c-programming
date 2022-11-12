//프렌드는 pirvate로 선언된 멤버를 특정 클래스나 함수가 접근가능 하도록 만드는 것
//두 객체를 비교할 때 많이 사용된다.

#include <iostream>
using namespace std;
class Box {
	double length, width, height;
public:
	Box(double l, double w, double h) : length{ l }, width{ w }, height{ h } { }
	friend void printBox(Box box); //프렌드 선언
};
void printBox(Box box) { //프렌드 정의
	cout << "Box( " << box.length << ", " << box.width << ", "
		<< box.height << ") " << endl;
}
int main() {
	Box box(10, 20, 30);
	printBox(box);
	return 0;
}
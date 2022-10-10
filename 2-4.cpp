#include <iostream>
#include <vector>
using namespace std;
//2-4
//벡터 v안에 저장된 사각형 객체를 꺼내서 사각형의 폭과 높이 값을
//출력하는 범위 기반 루프를 작성하고 테스트한다.
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
	v= { Rect(1,2),Rect(3,4),Rect(5,6) };
	
	for (Rect& e : v)
		e.print();

}
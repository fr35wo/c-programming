#include <iostream>
using namespace std;
//클래스 템플릿
//데이터 타입을 변수 T로 표시
template <typename T>
class Box {
	T data; // T는 타입(type)을 나타낸다.
public:
	Box() { }
	void set(T value) {
		data = value;
	}
	T get() {
		return data;
	}
};
int main()
{
	//정의된 클래스 템플릿 사용시 클래스 이름 뒤에 <자료형> 붙이기
	Box<int> box;
	box.set(100);
	cout << box.get() << endl;
	Box<double> box1;
	box1.set(3.141592);
	cout << box1.get() << endl;
	return 0;
}

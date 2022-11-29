#include <iostream>
using namespace std;
//두개 이상의 타입 매개 변수 가지는 경우
template <typename T1, typename T2> //타입 매개 변수 컴마로 분리하여서 정의
class Box2 {
	T1 first_data; // T1은 타입(type)을 나타낸다.
	T2 second_data; // T2는 타입(type)을 나타낸다.
public:
	Box2() { }
	T1 get_first();
	T2 get_second();

	void set_first(T1 value) {
		first_data = value;
	}

	void set_second(T2 value) {
		second_data = value;
	}

	get_first() {
		return first_data;
	}

	get_second() {
		return second_data;
	}
};

int main()
{
	Box2<int, double> b;
	b.set_first(10);
	b.set_second(3.14);
	cout << "(" << b.get_first() << ", " << b.get_second() << ")" << endl;
	return 0;
}

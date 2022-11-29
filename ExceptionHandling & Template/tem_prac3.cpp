#include <iostream>
using namespace std;
//�ΰ� �̻��� Ÿ�� �Ű� ���� ������ ���
template <typename T1, typename T2> //Ÿ�� �Ű� ���� �ĸ��� �и��Ͽ��� ����
class Box2 {
	T1 first_data; // T1�� Ÿ��(type)�� ��Ÿ����.
	T2 second_data; // T2�� Ÿ��(type)�� ��Ÿ����.
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
#include <iostream>
using namespace std;
//Ŭ���� ���ø�
//������ Ÿ���� ���� T�� ǥ��
template <typename T>
class Box {
	T data; // T�� Ÿ��(type)�� ��Ÿ����.
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
	//���ǵ� Ŭ���� ���ø� ���� Ŭ���� �̸� �ڿ� <�ڷ���> ���̱�
	Box<int> box;
	box.set(100);
	cout << box.get() << endl;
	Box<double> box1;
	box1.set(3.141592);
	cout << box1.get() << endl;
	return 0;
}

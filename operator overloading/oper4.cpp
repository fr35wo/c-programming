#include <iostream>
using namespace std;

//인덱스 연산자를 중복 정의하여 배열의 경계에서 벗어나는 것을 막을 수 있다.
const int SIZE = 10;
class MyArray {
private:
	int a[SIZE];
public:
	MyArray() {
		for (int i = 0; i < SIZE; i++)
			a[i] = 0;
	}
	int& operator[](int i) { //인덱스 연산자 중복 정의. 참조자를 반환한다.
		if (i >= SIZE) {
			cout << "잘못된 인덱스:";
			return a[0];
		}
		return a[i];
	}
};int main() {
	MyArray A;
	A[3] = 9;
	cout << "A[3]= " << A[3] << endl;
	cout << "A[16]= " << A[16] << endl;
	return 0;
}
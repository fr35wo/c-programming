#include <iostream>
using namespace std;

//�ε��� �����ڸ� �ߺ� �����Ͽ� �迭�� ��迡�� ����� ���� ���� �� �ִ�.
const int SIZE = 10;
class MyArray {
private:
	int a[SIZE];
public:
	MyArray() {
		for (int i = 0; i < SIZE; i++)
			a[i] = 0;
	}
	int& operator[](int i) { //�ε��� ������ �ߺ� ����. �����ڸ� ��ȯ�Ѵ�.
		if (i >= SIZE) {
			cout << "�߸��� �ε���:";
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
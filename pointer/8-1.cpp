#include <iostream>
using namespace std;

int main() {
	int* p;
	int a;
	cout << "몇 개의 정수를 입력합니까?: " << endl;
	cin >> a;
	p = new int[a]; //포인터 p가 int[a] 가리킨다.

	for (int i = 0; i < a; i++) {
		cin >> p[i];
	}
	for (int i = 0; i < a; i++)
		cout << p[i] << ", ";
	cout << endl;

	delete[] p;
}
#include <iostream>
using namespace std;

int main() {
	int* p;
	int a;
	cout << "�� ���� ������ �Է��մϱ�?: " << endl;
	cin >> a;
	p = new int[a]; //������ p�� int[a] ����Ų��.

	for (int i = 0; i < a; i++) {
		cin >> p[i];
	}
	for (int i = 0; i < a; i++)
		cout << p[i] << ", ";
	cout << endl;

	delete[] p;
}
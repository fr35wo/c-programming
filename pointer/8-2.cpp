#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cout << "�� ��� �Է�?: " << " ";
	cin >> a;
	string* names = new string[a]; //���ڿ� ���� ���� �迭 ����

	for (int i = 0; i < a; i++) {
		cout << "�̸� �Է� # " << i + 1 << ": ";
		cin >> names[i];
	}
	cout << endl;

	cout << "������ �̸� ����Դϴ�." << endl;
	for (int i = 0; i < a; i++)
		cout << "�̸� #" << i + 1 << ": " << names[i] << endl;

	delete[] names;


}
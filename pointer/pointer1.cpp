#include <iostream>
using namespace std;

int main() {
	int number = 10;
	// *�� ���� ���� �������̴�.(������ ���� �տ� ���)
	// &�� �ּ� ������ �̴�.

	int* p; //������ ����
	p = &number; //���� number�� �ּҸ� ������ p�� ����

	// 6 + 7
	int* p = &number;

	//p�� ����Ű�� ������ ����� �� ���
	cout << *p << endl;

	//�����Ͱ� �ƹ��͵� ����Ű�� ������
	int* p = nullptr;

}
#include <iostream>
#include <string>
using namespace std;
//1-3
//�迭 b�� ��� ��Ҹ� ����ϴ� ������� ������ �ۼ��Ͽ� ����.
//�ʿ��ϸ� Ŭ���� Test�� ��� �Լ��� �߰���Ų��.

class Test {
	int x;
public:
	Test() { x = 0; cout << x << " "; }
	Test(int x) : x{ x } {}
	void print() {
		cout << x << " ";
	}
};
int main() {
	Test b[2] = { Test(1),Test(2) };
	
	for (Test& e : b)
		e.print();
	return 0;
}
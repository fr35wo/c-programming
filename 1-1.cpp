#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
//1-1
//Test a[2]; ������ ����� �� � �޼����� ��µɱ�?

class Test {
	int x;
public:
	Test() { x = 0; cout << x << " "; }
	Test(int x): x{x}{}

};
int main() {
	Test a[2];
}
//0 0�� ��µȴ�. ��ü �迭 Test�� ũ�⸦ 2�� �ʱ�ȭ �� �� ���� 
//�������� �ʾ� ����Ʈ �μ��� 0�� ��µǴ� ���̴�.
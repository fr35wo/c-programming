#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
//1-2
//Test b[2] = {Test(1),Test(2)}; ������ ����� �� � �޼����� ����ұ�?

class Test {
	int x;
public:
	Test() { x = 0; cout << x << " "; }
	Test(int x) : x{ x } {}

};
int main() {
	Test b[2] = { Test(1),Test(2) };
}
//��ü �迭�� ũ�⸦ 2�� �ʱ�ȭ�� �� ���� 1,2�� ���� �־��־���.
//x�� 0�϶��� Test()�����ڿ� ���� ����� �ǹǷ� �ƹ��͵� ��µ��� �ʴ´�.
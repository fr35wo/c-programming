#include <iostream>
using namespace std;

int main() {
	//unique_ptr�� �⺻ �����͸� ���μ� ��ü�� �����.
	//����Ʈ �����ʹ� �ڵ����� nullptr�� �ʱ�ȭ, ���� �޸� ����

	unique_ptr<int[]> buf(new int[10]); //������ ���� �迭�� ����Ű�� ������
	for (int i = 0; i < 10; i++) {
		buf[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << buf[i] << " ";
	}
	cout << endl;
	return 0;
} //���⼭ ����Ʈ ������ �Ҹ�Ǹ� ���� �޸� ����
#include <iostream>
using namespace std;

int main() {
	int* ptr;	//���� �޸� ����Ű�� ������

	srand(time(NULL));
	ptr = new int[10]; // ���� �޸� �Ҵ� (new ������ ����Ͽ� ���� �޸� �Ҵ�)

	for (int i = 0; i < 10; i++)
		ptr[i] = rand(); //���� �޸� ���: ���� �޸𸮿� ���� ����

	for (int i = 0; i < 10; i++)
		cout << ptr[i] << " ";

	delete[] ptr; //���� �޸� �ݳ� (delete ������ ���)
	cout << endl;
	return 0;
	//�ݳ� ���� ������ �޸� ���� �߻�

}
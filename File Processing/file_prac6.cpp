#include <iostream>
#include <fstream>
using namespace std;
//����Լ� �̿��� ���� �����
//�޸��忡 ������ �� �ѱ��� ������ ���ڵ� ANSI�� �ٲٱ�
int main()
{
	ifstream is{ "scores.txt" };
	if (!is) { // ! ������ �����ε�
		cerr << "���� ���¿� �����Ͽ����ϴ�" << endl;
		exit(1);
	}
	char c;
	is.get(c); // �ϳ��� ���ڸ� �д´�.
	while (!is.eof()) // ������ ���� �ƴϸ�
	{
		cout << c;
		is.get(c);
	}
	cout << endl;
	return 0;
}

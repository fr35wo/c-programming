#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//�����̳ʿ��� ������ ã�� ���� find()�Լ�

int main()
{
	vector<string> vec{ "���", "�丶��", "��", "����", "Ű��" };

	auto it = find(vec.begin(), vec.end(), "����");
	if (it != vec.end())
		cout << "������ " << distance(vec.begin(), it) << "�� �ֽ��ϴ�." << endl;
		return 0;
}

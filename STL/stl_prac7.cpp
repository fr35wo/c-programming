#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//������ �������� func()�� ������ ����� ��� ���� ��ȯ count_if()�Լ�
template <typename T>
bool is_even(const T& num) //is_even ¦������ �˻� �Լ�
{
	return (num % 2) == 0;
}
int main()
{
	vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	size_t n = count_if(vec.begin(), vec.end(), is_even<int>);
	cout << "���� ¦���� ����� ����: " << n << endl;
	return 0;
}

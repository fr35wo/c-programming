#include <iostream>
using namespace std;
//���ø� �Լ� �Ϲ�ȭ ���α׷��� �̿��Ͽ� ����
template <typename T> //T�� Ÿ���� �̸����� ���ȴ�
T get_max(T x, T y)
{
	if (x > y) return x;
	else return y;
}
int main()
{
	//get_max ȣ�� �� ���� �Լ��� �强��
	cout << get_max(1, 3) << endl;
	cout << get_max(1.2, 3.9) << endl;
	return 0;
}
#include <iostream>
using namespace std;
//���ٽ�
int main()
{
	auto sum = [](int x, int y) { return x + y; };
	cout << sum(1, 2) << endl;
	cout << sum(10, 20) << endl;
	return 0;
}

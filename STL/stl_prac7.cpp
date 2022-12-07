#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//지정된 구간에서 func()을 참으로 만드는 요소 개수 반환 count_if()함수
template <typename T>
bool is_even(const T& num) //is_even 짝수인지 검사 함수
{
	return (num % 2) == 0;
}
int main()
{
	vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	size_t n = count_if(vec.begin(), vec.end(), is_even<int>);
	cout << "값이 짝수인 요소의 개수: " << n << endl;
	return 0;
}

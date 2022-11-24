#include <iostream>
using namespace std;
//템플릿 함수 일반화 프로그래밍 이용하여 정의
template <typename T> //T가 타입의 이름으로 사용된다
T get_max(T x, T y)
{
	if (x > y) return x;
	else return y;
}
int main()
{
	//get_max 호출 시 실제 함수가 장성됨
	cout << get_max(1, 3) << endl;
	cout << get_max(1.2, 3.9) << endl;
	return 0;
}
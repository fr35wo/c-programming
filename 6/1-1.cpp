#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
//1-1
//Test a[2]; 문장이 실행될 때 어떤 메세지가 출력될까?

class Test {
	int x;
public:
	Test() { x = 0; cout << x << " "; }
	Test(int x): x{x}{}

};
int main() {
	Test a[2];
}
//0 0이 출력된다. 객체 배열 Test의 크기를 2로 초기화 한 후 값을 
//설정하지 않아 디폴트 인수인 0이 출력되는 것이다.

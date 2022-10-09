#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
//1-2
//Test b[2] = {Test(1),Test(2)}; 문장이 실행될 때 어떤 메세지를 출력할까?

class Test {
	int x;
public:
	Test() { x = 0; cout << x << " "; }
	Test(int x) : x{ x } {}

};
int main() {
	Test b[2] = { Test(1),Test(2) };
}
//객체 배열의 크기를 2로 초기화한 후 각각 1,2의 값을 넣어주었다.
//x가 0일때만 Test()생성자에 의해 출력이 되므로 아무것도 출력되지 않는다.
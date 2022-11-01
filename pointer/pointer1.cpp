#include <iostream>
using namespace std;

int main() {
	int number = 10;
	// *은 간접 참조 연산자이다.(포인터 변수 앞에 사용)
	// &은 주소 연산자 이다.

	int* p; //포인터 정의
	p = &number; //변수 number의 주소를 포인터 p에 저장

	// 6 + 7
	int* p = &number;

	//p가 가리키는 공간에 저장된 값 출력
	cout << *p << endl;

	//포인터가 아무것도 가리키지 않을때
	int* p = nullptr;

}
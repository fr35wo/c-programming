#include <iostream>
using namespace std;

int main() {
	//unique_ptr은 기본 포인터를 감싸서 객체로 만든다.
	//스마트 포인터는 자동으로 nullptr로 초기화, 동적 메모리 삭제

	unique_ptr<int[]> buf(new int[10]); //정수형 동적 배열을 가리키는 포인터
	for (int i = 0; i < 10; i++) {
		buf[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << buf[i] << " ";
	}
	cout << endl;
	return 0;
} //여기서 스마트 포인터 소멸되며 동적 메모리 해제
#include <iostream>
using namespace std;

int main() {
	int* ptr;	//동적 메모리 가리키는 포인터

	srand(time(NULL));
	ptr = new int[10]; // 동적 메모리 할당 (new 연산자 사용하여 동적 메모리 할당)

	for (int i = 0; i < 10; i++)
		ptr[i] = rand(); //동적 메모리 사용: 동적 메모리에 난수 저장

	for (int i = 0; i < 10; i++)
		cout << ptr[i] << " ";

	delete[] ptr; //동적 메모리 반납 (delete 연산자 사용)
	cout << endl;
	return 0;
	//반납 하지 않으면 메모리 누수 발생

}
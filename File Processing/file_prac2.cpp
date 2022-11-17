#include <iostream>
#include <fstream>
using namespace std;
//파일 읽기
int main()
{
	ifstream is{ "numbers.txt" };
	if (!is) {
		cerr << "파일 오픈에 실패하였습니다" << endl;
		exit(1);
	}
	int number;
	while (is) {
		is >> number;
		cout << number << " ";
	}
	cout << endl;
	return 0;
	// 객체 is가 범위를 벗어나면 ifstream 소멸자가 파일을 닫는다.
}

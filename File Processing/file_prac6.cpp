#include <iostream>
#include <fstream>
using namespace std;
//멤버함수 이용한 파일 입출력
//메모장에 저장할 때 한글이 있으면 인코딩 ANSI로 바꾸기
int main()
{
	ifstream is{ "scores.txt" };
	if (!is) { // ! 연산자 오버로딩
		cerr << "파일 오픈에 실패하였습니다" << endl;
		exit(1);
	}
	char c;
	is.get(c); // 하나의 문자를 읽는다.
	while (!is.eof()) // 파일의 끝이 아니면
	{
		cout << c;
		is.get(c);
	}
	cout << endl;
	return 0;
}

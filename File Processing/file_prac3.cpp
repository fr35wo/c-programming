#include <iostream>
#include <fstream>

//파일 모드
int main()
{

	using namespace std;
	ofstream os("sample.txt", ios::app);
	//ios::app으로 열면 동일한 내용을 2번 파일에 쓸 수 있다.
	if (!os)
	{
		cerr << "파일 오픈에 실패하였습니다" << endl;
		exit(1);
	}
	os << "추가되는 줄 #1" << endl;
	os << "추가되는 줄 #2" << endl;
	return 0;
}

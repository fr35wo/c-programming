#include <iostream>
#include <fstream>// 파일 입출력을 하려면 헤더 파일을 포함하여야 한다.
using namespace std;
//temp메모장에 있는 데이터를 읽어 출력
int main()
{
	ifstream is{ "temp.txt" };
	if (!is) { // ! 연산자 오버로딩
		cerr << "파일 오픈에 실패하였습니다" << endl;
		exit(1);
	}
	int hour;
	double temperature;
	while (is >> hour >> temperature) {
		cout << hour << "시: 온도 " << temperature << endl;
	}
	return 0;
}

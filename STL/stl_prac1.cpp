#include <iostream>
#include <time.h>
#include <list>
using namespace std;
//컨테이너 예제
int main()
{
	list<int> values; //리스트 생성
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		values.push_back(rand() % 100); //컨테이너 끝에 데이터 추가
	}
	values.sort(); //크기 순 정렬
	for (auto& e : values) {
		std::cout << e << ' ';
	}
	std::cout << endl;
	return 0;
}

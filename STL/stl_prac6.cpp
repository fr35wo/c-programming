#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//컨테이너에서 데이터 찾기 위한 find()함수

int main()
{
	vector<string> vec{ "사과", "토마토", "배", "수박", "키위" };

	auto it = find(vec.begin(), vec.end(), "수박");
	if (it != vec.end())
		cout << "수박이 " << distance(vec.begin(), it) << "에 있습니다." << endl;
		return 0;
}

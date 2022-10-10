/* 2-5
벡터 v 안에 저장된 사각형 객체를 꺼내서 사각형의 면적 순으로 출력하는 코드를 작성한다. 
본문에 언급된 sort() 함수를 사용해본다. */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Rect {
	int w, h;
public:
	Rect() : w(0), h(0) {}
	Rect(int w, int h) : w{ w }, h{ h } {}
	int get_a() { return w * h; }
	void print() // 사각형의 폭과 높이와 면적 값을 출력하는 함수
	{
		cout << "폭: " << w << " 높이: " << h << " 면적: " << w * h << endl;
	}
};
bool compare(Rect& p, Rect& q) // 면적 순으로 정렬하는데 사용되는 비교 함수
{
	return p.get_a() < q.get_a();
}
int main()
{
	int width, height;
	vector<Rect> v; // 벡터 v 생성

	for (int i = 0; i < 3; i++) // 범위 기반 for 루프를 사용하여 사용자로부터 사각형의 폭과 높이 값을 받아서 벡터 안에 저장
	{
		cout << "폭: ";
		cin >> width;
		cout << "높이: ";
		cin >> height;
		v.push_back(Rect(width, height));
	}

	sort(v.begin(), v.end(), compare); // 벡터 v 안에 저장된 사각형 객체를 꺼내서 사각형의 면적 순으로 정렬

	for (auto& e : v) // 사각형의 폭과 높이와 면적 값을 출력하는 범위 기반 for 루프
		e.print();

	return 0;
}
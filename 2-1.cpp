#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
//2-1
//크키가 3인 Rect 객체의 배열 list를 생성해보자. 
//Rect객체와 w와 h의 값은 모두 0으로 초기화 시킨다.
class Rect {
	int w, h;
public: 
	Rect(): w{0},h{0}{}
	Rect(int w,int h):w{w},h{h}{}
};

int main() {
	Rect list[3]{ Rect(0,0), Rect(0,0), Rect(0,0) };
}

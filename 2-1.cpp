#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
//2-1
//ũŰ�� 3�� Rect ��ü�� �迭 list�� �����غ���. 
//Rect��ü�� w�� h�� ���� ��� 0���� �ʱ�ȭ ��Ų��.
class Rect {
	int w, h;
public: 
	Rect(): w{0},h{0}{}
	Rect(int w,int h):w{w},h{h}{}
};

int main() {
	Rect list[3]{ Rect(0,0), Rect(0,0), Rect(0,0) };
}

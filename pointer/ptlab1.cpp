#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;
class Circle {
public:
	int x, y, radius; // 원의 중심점과 반지름
	string color; // 원의 색상
	void draw();
};
void Circle::draw()
{ // 원을 화면에 그리는 함수
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}
int main()
{
	int n;
	Circle* p; //Circle객체의 주소 갖고있다. 객체 생성 
	cout << "몇 개의 원을 만들까요: ";
	cin >> n;
	p = new Circle[n]; //동적 배열
	for (int i = 0; i < n; i++) {
		p[i].x = 100 + rand() % 300;
		p[i].y = 100 + rand() % 200;
		p[i].radius = rand() % 100;
		p[i].draw();
	}
	delete[] p;
	getch();
	return 0;
}
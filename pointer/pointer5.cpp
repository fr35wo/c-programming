#include<iostream>
using namespace std;

class Rectangle {
private:
	int length;
	int width;
public:
	Rectangle() {
		width = 30;
		length = 40;
	}
	//모든 클래스 멤버들은 숨어 있는 하나의 매개변수 this포인터 가지고있다.
	//초기화 리스트에서 length{length}는 괜찮지만
	//body부분에 int length = length 라고 하면 오류 가능성 있다. 
	~Rectangle() {}
	void setLength(int length) { this->length = length; } 
	int getLength() { return this->length; }
	void setWidth(int width) { this->width = width; }
	int getWidth() { return width; }
};

int main() {
	Rectangle rect;
	cout << rect.getLength() << endl;
	cout << rect.getWidth() << endl;

	rect.setLength(20);
	rect.setWidth(10);

	cout << rect.getLength() << endl;
	cout << rect.getWidth() << endl;
	return 0;
}
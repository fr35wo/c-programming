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
	//��� Ŭ���� ������� ���� �ִ� �ϳ��� �Ű����� this������ �������ִ�.
	//�ʱ�ȭ ����Ʈ���� length{length}�� ��������
	//body�κп� int length = length ��� �ϸ� ���� ���ɼ� �ִ�. 
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
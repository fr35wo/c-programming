#include <iostream>
#include <vector>
using namespace std;
//2-4
//���� v�ȿ� ����� �簢�� ��ü�� ������ �簢���� ���� ���� ����
//����ϴ� ���� ��� ������ �ۼ��ϰ� �׽�Ʈ�Ѵ�.
class Rect {
	int w, h;
public:
	Rect() : w{ 0 }, h{ 0 } {}
	Rect(int w, int h) :w{ w }, h{ h } {}
	void print() {
		cout << w << " " << h << endl;
	}
};

int main() {
	vector<Rect> v(3);
	v= { Rect(1,2),Rect(3,4),Rect(5,6) };
	
	for (Rect& e : v)
		e.print();

}
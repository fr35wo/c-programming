#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
//2-3
//���� v�� �����ϰ� ����ڷκ��� �簢���� ���� ���� ���� �޾Ƽ�
//���� �ȿ� ���� �غ���.
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
	int a, b;
	for (int i = 0; i < 3; i++) {
		cin >> a;
		cin >> b;
		v[i] = Rect(a, b);
	}
	for (Rect& e : v)
		e.print();

}
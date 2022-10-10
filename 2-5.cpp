/* 2-5
���� v �ȿ� ����� �簢�� ��ü�� ������ �簢���� ���� ������ ����ϴ� �ڵ带 �ۼ��Ѵ�. 
������ ��޵� sort() �Լ��� ����غ���. */
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
	void print() // �簢���� ���� ���̿� ���� ���� ����ϴ� �Լ�
	{
		cout << "��: " << w << " ����: " << h << " ����: " << w * h << endl;
	}
};
bool compare(Rect& p, Rect& q) // ���� ������ �����ϴµ� ���Ǵ� �� �Լ�
{
	return p.get_a() < q.get_a();
}
int main()
{
	int width, height;
	vector<Rect> v; // ���� v ����

	for (int i = 0; i < 3; i++) // ���� ��� for ������ ����Ͽ� ����ڷκ��� �簢���� ���� ���� ���� �޾Ƽ� ���� �ȿ� ����
	{
		cout << "��: ";
		cin >> width;
		cout << "����: ";
		cin >> height;
		v.push_back(Rect(width, height));
	}

	sort(v.begin(), v.end(), compare); // ���� v �ȿ� ����� �簢�� ��ü�� ������ �簢���� ���� ������ ����

	for (auto& e : v) // �簢���� ���� ���̿� ���� ���� ����ϴ� ���� ��� for ����
		e.print();

	return 0;
}
#include <iostream>
using namespace std;
class Pizza {
	int radius;
public:
	Pizza(int r = 0) : radius{ r } { }
	~Pizza() { }
	void setRadius(int r) { radius = r; }
	void print() { cout << "Pizza(" << radius << ")" << endl; }
};

Pizza createPizza() //pizza��ü ��ȯ
{
	Pizza p(10); //��ü p �����Ͽ� ��ȯ ��ü ���� �̶� ���� ������ ȣ��
	return p;	//�� ��ȯ��ü�� main() �Լ����� ��ü obj�� ����
}

int main() {
	Pizza obj;
	obj = createPizza();
	obj.print();
	return 0 ;
}
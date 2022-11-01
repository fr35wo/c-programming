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

void upgrade(Pizza p) { p.setRadius(20); }
//1.��ü�� �Լ��� �����ϸ� ���� ���� ȣ���� ����Ǿ� 
//main()�Լ��� ��ü regular�� ������ upgrade()�� �Ű� ������ ��ü p�� ����
//return pizza(10)

void upgrade(Pizza* p) { p->setRadius(20); }
//2.��ü�� �ּҸ� �Լ��� �����ϸ� ��ü�� �ּҰ� p�� ���޵ȴ�.
//return Pizza(20)

void upgrade(Pizza& pizza) { pizza.setRadius(20); }
//3.���� �Ű� ���� ����ϱ�
//�� �����Ϳ� ������ ȿ������ �ξ� �˾ƺ��� ����.
//�����ڸ� ���Ͽ� ���� ��ü ����(pizza�� ���� �����ֱ�)

int main() {
	Pizza obj(10);
	//1 upgrade(obj); 
	//2 upgrade(&obj); 
	//3 upgrade(obj);
	obj.print();
	return 0;
}
#include<iostream>
using namespace std;

//const int* p1;	p1�� ������� �ʴ� ���� ����Ű�� ������
//int* const p2;	p2�� ������ ���� ��� ������. ������ ���� ���� ������ p2�� �ٸ����� ����ų �� ����
//const int* const p3;	p3�� ����� ���� ��� ������. �����Ͱ� ����Ű�� �� ���� �Ұ� ������ p3�� 
class Circle
{
private:
	int radius;
public:
	Circle() :radius(10) { }
	~Circle() { }
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() const { return radius; }
};

int main() {
	Circle* p = new Circle();
	const Circle* pConstObj = new Circle(); //������� �ʴ� Circle�� ����Ű�� ������
	Circle* const pConstPtr = new Circle(); //Circle�� ���� ������ pConstPtr�� �ٸ����� ����Ű�� ���Ѵ�.
	cout << "pRect->radius: " << p->getRadius() << endl;
	cout << "pConstObj->radius: " << pConstObj->getRadius() << endl;
	cout << "pConstPtr->radius: " << pConstPtr->getRadius()
		<< endl << endl;
	p->setRadius(30);
	// pConstObj->setRadius(30);
	pConstPtr->setRadius(30);
	cout << "pRect->radius: " << p->getRadius() << endl;
	cout << "pConstObj->radius: " << pConstObj->getRadius() << endl;
	cout << "pConstPtr->radius: " << pConstPtr->getRadius() << endl;
	return 0;

}
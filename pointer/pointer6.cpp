#include<iostream>
using namespace std;

//const int* p1;	p1은 변경되지 않는 정수 가리키는 포인터
//int* const p2;	p2는 정수에 대한 상수 포인터. 정수는 변경 가능 하지만 p2는 다른것을 가리킬 수 없다
//const int* const p3;	p3은 상수에 대한 상수 포인터. 포인터가 가리키는 값 변경 불가 포인터 p3도 
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
	const Circle* pConstObj = new Circle(); //변경되지 않는 Circle을 가리키는 포인터
	Circle* const pConstPtr = new Circle(); //Circle은 변경 되지만 pConstPtr은 다른것을 가리키지 못한다.
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
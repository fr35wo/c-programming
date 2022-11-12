#include <iostream>
#include <string>
using namespace std;

//++연산자 중복

class Counter {
private:
	int value;
public:
	Counter() : value{ 0 } { };
	~Counter() { }
	int getValue() const { return value; } //함수의 반환값 const
	void setValue(int x) { value = x; }

	//++연산자 중복 정의
	Counter& operator++() //반환형이 Counter로 선언되었다면 객체c의 복사본이 반환되어 ++연산이 원본 객체c에 적용되지 않는다.
	{
		++value;
		return *this; //객체 자기 자신 반환
	}
};
int main()
{
	Counter c;
	cout << "카운터의 값: " << c.getValue() << endl;
	++c;
	cout << "카운터의 값: " << c.getValue() << endl;
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

//++������ �ߺ�

class Counter {
private:
	int value;
public:
	Counter() : value{ 0 } { };
	~Counter() { }
	int getValue() const { return value; } //�Լ��� ��ȯ�� const
	void setValue(int x) { value = x; }

	//++������ �ߺ� ����
	Counter& operator++() //��ȯ���� Counter�� ����Ǿ��ٸ� ��üc�� ���纻�� ��ȯ�Ǿ� ++������ ���� ��üc�� ������� �ʴ´�.
	{
		++value;
		return *this; //��ü �ڱ� �ڽ� ��ȯ
	}
};
int main()
{
	Counter c;
	cout << "ī������ ��: " << c.getValue() << endl;
	++c;
	cout << "ī������ ��: " << c.getValue() << endl;
	return 0;
}
//MyVector ��ü ������ <<�����ڰ� ���۵ǵ��� �� �� �ִ�.

#include <iostream>
using namespace std;
class MyVector
{
private:
	double x, y;
public:
	MyVector(double xvalue = 0.0, double yvalue = 0.0) : x(xvalue),
		y(yvalue) { }
	friend ostream& operator<<(ostream& os, const MyVector& v) { //<< ������ �ߺ�����. ostream ������ ��ȯ.
		os << "(" << v.x << "," << v.y << ")" << endl;
		return os;
	}
};
int main()
{
	MyVector v1(1.0, 2.0), v2(3.0, 4.0), v3;
	cout << v1 << v2 << v3;
	return 0;
}

//������ �ߺ� �� ������

//���ο� �����ڸ� ����� ���� ������ �ʴ´�. ���� �� �������� ��Ÿ���� ���Ͽ�^ �����ڸ� ���Ӱ� ������ �� ����.

// ���� ��� �����ڰ� �ߺ��� �����ϴ�.������ ::������, .*������, .������, ? : �����ڴ� �ߺ��� �Ұ����ϴ�.

// �����ڵ��� �켱������ ���� ��Ģ�� ������� �ʴ´�.

// ���� + �����ڸ� �ߺ��Ͽ��ٸ� �ϰ����� ���Ͽ� - , +=, -=�����ڵ� �ߺ��ϴ� ���� ����.

#include <iostream>
#include <string>

using namespace std;

/* Ŭ���� Student�� �л��� ��Ÿ����. Ŭ���� Myclass�� �ϳ��� �б��� ��Ÿ����.
�б��� �л� ���� �б޸��� �ٸ���. ���� ���� �迭 ��ſ� ���� �迭�� ����ϱ�� �ߴ�.
�л����� 3���� �б� "special"�� �����ϰ� ���� �迭�� �����Ͽ��� �л����� �̸��� �����غ���.
*/

class Student {
	string name;
public:
	Student(string name = "") :name{ name } {}
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};

class MyClass {
	string className;
	Student* p; //student�� ����Ű�� ������ ����
	int size;
public:
	void setName(string name) { className = name; }
	string getName() { return className; }
	void setStudent() { p = new Student[size]; }
	Student *getStudent() { return p; } //���� ����. ������ p�� ����Ű�� ������ �����;���
	void setSize(int size) { this->size = size; }
	int getSize() { return size; }
};

int main(){
	MyClass* special = new MyClass[3];

	special->setName("special");
	special->setSize(3);
	special->setStudent();

	special->getStudent()[0].setName("ȫ�浿");
	special->getStudent()[1].setName("��ö��");
	special->getStudent()[2].setName("���ڿ�");

	cout << "�б� " << special->getName() << "�� �л����� ������ ����." << endl;
	for (int i = 0; i < special->getSize(); i++)
		cout << "�л� #" << i + 1 << ": " << special->getStudent()[i].getName() << endl;

	delete[] special->getStudent();
	delete[] special;

	return 0;
}
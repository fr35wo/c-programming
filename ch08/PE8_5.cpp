#include <iostream>
#include <string>

using namespace std;

/* 클래스 Student는 학생을 나타낸다. 클래스 Myclass는 하나의 학급을 나타낸다.
학급의 학생 수는 학급마다 다르다. 따라서 정적 배열 대신에 동적 배열을 사용하기로 했다.
학생수가 3명인 학급 "special"을 생성하고 동적 배열을 생성하여서 학생들의 이름을 저장해보자.
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
	Student* p; //student를 가리키는 포인터 정의
	int size;
public:
	void setName(string name) { className = name; }
	string getName() { return className; }
	void setStudent() { p = new Student[size]; }
	Student *getStudent() { return p; } //간접 참조. 포인터 p가 가리키는 내용을 가져와야함
	void setSize(int size) { this->size = size; }
	int getSize() { return size; }
};

int main(){
	MyClass* special = new MyClass[3];

	special->setName("special");
	special->setSize(3);
	special->setStudent();

	special->getStudent()[0].setName("홍길동");
	special->getStudent()[1].setName("김철수");
	special->getStudent()[2].setName("최자영");

	cout << "학급 " << special->getName() << "의 학생들은 다음과 같다." << endl;
	for (int i = 0; i < special->getSize(); i++)
		cout << "학생 #" << i + 1 << ": " << special->getStudent()[i].getName() << endl;

	delete[] special->getStudent();
	delete[] special;

	return 0;
}
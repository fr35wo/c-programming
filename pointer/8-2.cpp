#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cout << "몇 사람 입력?: " << " ";
	cin >> a;
	string* names = new string[a]; //문자열 저장 동적 배열 생성

	for (int i = 0; i < a; i++) {
		cout << "이름 입력 # " << i + 1 << ": ";
		cin >> names[i];
	}
	cout << endl;

	cout << "다음은 이름 목록입니다." << endl;
	for (int i = 0; i < a; i++)
		cout << "이름 #" << i + 1 << ": " << names[i] << endl;

	delete[] names;


}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void GetInput(string& s) {
	cin >> s;
	if (not(s == "����" || s == "����" || s == "��"))
		throw "\"����\", \"����\", \"��\" �߿����� �����ϼ���.";
}
void ComputerInput(string& t) {
	srand((unsigned int)time(NULL));
	int n = rand() % 3;
	if (n == 0)
		t = "����";
	else if (n == 1)
		t = "����";
	else
		t = "��";
}
int main() {
	string s;
	string t;
	try {
		cout << "����, ����, �� �����Դϴ�.\n";
		cout << "������ ���ðڽ��ϱ� : ";
		GetInput(s);
		ComputerInput(t);
		cout << "��ǻ�ʹ� " << t << "�� �½��ϴ�.\n\n";

		if ((s == "����" && t == "����") || (s == "����" && t == "��") || (s == "��" && t == "����"))
			cout << "����� �����ϴ�.\n";
		else if ((s == "����" && t == "����") || (s == "����" && t == "����") || (s == "��" && t == "��"))
			cout << "�����ϴ�.\n";
		else
			cout << "����� �̰���ϴ�.\n";
	}
	catch (const char* e) {
		cerr << "���� : " << e << endl;
		return -1;
	}
	catch (...) {
		cerr << "����";
	}
	return 0;
}
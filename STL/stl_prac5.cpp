#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	map<string, string> dic;
	dic["boy"] = "�ҳ�";
	dic["school"] = "�б�";
	dic["office"] = "����";
	dic["house"] = "��";
	dic["morning"] = "��ħ";
	dic["evening"] = "����";
	string word;
	while (true) {
		cout << "�ܾ �Է��Ͻÿ�: ";
		cin >> word; //key
		if (word == "quit") break;
		string meaning = dic[word]; 
		if (meaning != "") //value
			cout << word << "�� �ǹ̴� " << meaning << endl;
	}
	return 0;
}

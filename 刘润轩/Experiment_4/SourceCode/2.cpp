#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
float checkAgeScore(int age, float score);
int main()
{
	string name;
	int age;
	float score;
	bool flag = false;
	cout << "input data...." << endl;
	getline(cin, name);
	do {
		flag = false;
		cin >> age >> score;
		try {
			checkAgeScore(age, score);
		}
		catch (invalid_argument const &ex) {
			cerr << "�����Ƿ� �� " << ex.what() << endl;
			flag = true;
			cout << "��������ѧ�� :" << name << "��age and score..." << endl;
		}
	} while (flag);

	cout << "������" << name << endl;
	cout << "���䣺" << age << endl;
	cout << "�ٷ��Ƴɼ�Ϊ�� " << score * 20 << "%" << endl;

	system("pause");
}



float checkAgeScore(int age, float score) {
	if (age < 16 || age>25)
		throw invalid_argument("����Ƿ�...");
	if (score < 0 || score>5)
		throw invalid_argument("�����Ƿ�...");


}

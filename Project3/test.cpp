#include <iostream> // 3����
#include <string>
using namespace std;

/* ���� 1

�Ʒ� ����ü�� ���������� ��Ÿ��
���̴�.

struct Book {
    string title;    // å ����
    string author;   // �۰�
    int year;        // ���� ����
    double price;    // ����
};

�� ����ü��  Ŭ����(class)�� ����ÿ�.
�������� Ŭ������ ����Լ��� å������ �Է¹޴� �Լ�,
å������ ����ϴ� �Լ���
�����ȴ�.

�Է�-1
�ظ����Ϳ� �������� ��
J.K. �Ѹ�
1997
10000
���-1
å ���� ���:
����: �ظ����Ϳ� �������� ��
�۰�: J.K. �Ѹ�
���� ����: 1997
����: $10000

*/

/* ���� 

#include <iostream>
#include <string>
using namespace std;

class Book {
public:
	string title;    // å ����
	string author;   // �۰�
	int year;        // ���� ����
	double price;

};

int main() {
	Book a;
	getline(cin, a.title);
	getline(cin, a.author);
	cin >> a.year >> a.price;
	//getline(cin, a.year);
	//getline(cin, a.price);

	cout << "å ���� ���:" << '\n' << "����: " << a.title << '\n' << "�۰�: " << a.author << '\n' << "���� ����: " << a.year << '\n' << "����: " << "$" << a.price << endl;

	return 0;
}

*/

/* ���� 2

�л��� ������ �����ϰ� ����� �� �ִ� Ŭ������ �����Ͻÿ�.

�л�Ŭ������ ��������� �̸�,����,����,�ּҰ� ������
����Լ��� �л������� ����� �� �ִ� �Լ��� �����ȴ�.

- ��������� ���������ڴ� private
- �����͸� ��,����ϱ����� get,set �Լ� ����
- ������� ����Լ� ����
- ������, �Ҹ��� ����
- Ŭ���� �������̽��� �����θ� �и��Ͽ� �ۼ�

�Է�-1
����ȣ 33 �� �������б�
���-1
�̸� ����ȣ
���� 33
���� ��
�ּ� �������б�

*/

/* ���� 

#include <iostream>
#include <string>
using namespace std;

class student {

private:
	string name;
	int age = 0;
	string gender;
	string address;

public:
	int setage(int _age);
	int getage();
	string getname();
	string setname(string _name);
	string getgender();
	string setgender(string gender);
	string getaddress();
	string setaddress(string address);

public:

	student() {};
	~student() {};

};

int student::setage(int _age) {

	age = _age;
	return age;
}

int student::getage() {

	return age;
}

string student::getname() {

	return name;
}

string student::setname(string _name) {

	name = _name;
	return name;
}

string student::getaddress() {

	return address;
}

string student::setaddress(string _address) {

	address = _address;
	return address;
}

string student::getgender() {

	return gender;
}

string student::setgender(string _gender) {

	gender = _gender;
	return gender;
}

int main(void) {

	student a;
	string name;
	cin >> name;
	a.setname(name);

	int age;
	cin >> age;
	a.setage(age);

	string gender;
	cin >> gender;
	a.setgender(gender);

	string address;
	cin >> address;
	a.setaddress(address);

	cout << "�̸� " << name << '\n' << "���� " << age << '\n' << "���� " << gender << '\n' << "�ּ� " << address << endl;

	return 0;

}

*/
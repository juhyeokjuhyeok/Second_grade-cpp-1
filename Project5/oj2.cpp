#include <iostream>
#include <string>
using namespace std;

/*���� 1

Player�� ������ �Է¹ް� ����ϴ� �����̴�.
mp�� ��ü�� ������ �� 50�� ���� ���´�.

Player�� ��������� private�� �� �Ʒ� �ڵ带 �����Ͻÿ�.

���� - 1
<���> �÷��̾��� �̸� : <�Է�> ����ȣ
<���> �÷��̾��� ü�� : <�Է�> 100
<���> =======Player Info=======
<���> ����ȣ
<���> 100

���� - 2
<���> �÷��̾��� �̸� : <�Է�> ȫ�浿
<���> �÷��̾��� ü�� : <�Է�> 200
<���> =======Player Info=======
<���> ȫ�浿
<���> 200


#include
#include
using namespace std;

class Player {
private:
	string name;
	int hp;
	int mp;

public:
	void setName() {

	}
	void setHp() {

	}
	void printInfo();

public:
	Player() : mp(){}
	~Player(){}
};

void Player::printInfo(){
	cout << "=======Player Info=======" << endl;
	cout <<  << endl;
	cout <<  << endl;
}

int main(void) {
	Player* human;

	cout << "�÷��̾��� �̸� : ";
	cout << "�÷��̾��� ü�� : ";

	human->printInfo();
}

*/

/* ����

#include <iostream>
#include <string>
using namespace std;

class Player {
private:
	string name;
	int hp;
	int mp;

public:
	void setName(string a) {
		name = a;
	}
	void setHp(int a) {
		hp = a;
	}
	void printInfo();

public:
	Player() : mp() {
		mp = 50;
		hp = 0;
		name = "abcd";
	}
	~Player() {}
};

void Player::printInfo() {
	cout << "=======Player Info=======" << endl;
	cout << name << endl;
	cout << hp << endl;
}

int main(void) {
	Player human;
	string name;
	int hp;

	cout << "�÷��̾��� �̸� : ";
	cin >> name;
	cout << "�÷��̾��� ü�� : ";
	cin >> hp;

	human.setHp(hp);
	human.setName(name);

	human.printInfo();
}

*/

/* ���� 2

Player�� ������ �Է¹ް� ����ϴ� �����̴�.
mp�� ��ü�� ������ �� 50�� ���� ���´�.

���� ��ȣ ��ų�� �����Ͽ��� �� mp�� 1�������ϴ� ��ų�̸�,
���丮�� ������ HP�� 20�����ϴ� ��ų�̴�.

���� ��ȣ ��ų�� ���� ������ �� ���� ++ ������ �ߺ��� ����Ͽ� �����ϰ�
���丮�� �Դ°��� ���� ������ �� += ������ �ߺ��� ����Ͽ� �����϶�.


Player�� ��������� private�� �� �Ʒ� �ڵ带 �����Ͻÿ�.


���� - 1
<���> �÷��̾��� �̸� : <�Է�> ����ȣ
<���> �÷��̾��� ü�� : <�Է�> 100
<���> ���� ��ȣ ��ų�� ����! (MP +1)
<���> ���丮�� �ϳ� �Ծ���! (hp + 20)
<���> =======Player Info=======
<���> �̸�: ����ȣ
<���> ü��: 120
<���> ����: 51

���� - 2
<���> �÷��̾��� �̸� : <�Է�> �տ�
<���> �÷��̾��� ü�� : <�Է�> 300
<���> ���� ��ȣ ��ų�� ����! (MP +1)
<���> ���丮�� �ϳ� �Ծ���! (hp + 20)
<���> =======Player Info=======
<���> �̸�: �տ�
<���> ü��: 320
<���> ����: 51

#include
#include
using namespace std;

class Player {
private:
	string name;
	int hp;
	int mp;

public:
	Player() : mp(50) {}
	Player(string n, int h) : name(n), hp(h), mp(50) {}

	void operator++() {
	}

	Player& operator+=() { // �Ű������� ������ �־������?
									  //�� �ڽ��� �����Ϸ���?
	}

	void setName(string n) { // ������� �ʾƵ� ����
	}

	void setHp(int h) { // ������� �ʾƵ� ����
	}

	void printInfo() {
		cout << "=======Player Info=======" << endl;
		cout << "�̸�: " <<  << endl;
		cout << "ü��: " <<  << endl;
		cout << "����: " <<  << endl;
	}
};

int main() {
	string playerName;
	int playerHp;

	cout << "�÷��̾��� �̸�: ";
	cin >> playerName;

	cout << "�÷��̾��� ü��: ";
	cin >> playerHp;

	Player human(playerName, playerHp);

	cout << "���� ��ȣ ��ų�� ����! (MP + 1)" << endl;
	++human; // ���� ������ ++ �����ε� �����ϱ�

	cout << "���丮�� �ϳ� �Ծ���! (HP + 20)" << endl;
	human += 20; // ���� ������ += �����ε� �����ϱ�
	human.printInfo();

	return 0;
}

*/

/* ����

#include <iostream>
#include <string>
using namespace std;

class Player {
private:
	string name;
	int hp;
	int mp;

public:
	Player() : mp(50) {}
	Player(string n, int h) : name(n), hp(h), mp(50) {}

	void operator++() {
		mp++;
	}

	Player& operator+=(int a) { // �Ű������� ������ �־������?
		hp += a;
		return*this;
		//�� �ڽ��� �����Ϸ���?
	}

	void setName(string n) { // ������� �ʾƵ� ����
		name = n;
	}

	void setHp(int h) { // ������� �ʾƵ� ����
		hp = h;
	}

	void printInfo() {
		cout << "=======Player Info=======" << endl;
		cout << "�̸�: " << name << endl;
		cout << "ü��: " << hp << endl;
		cout << "����: " << mp << endl;
	}
};

int main() {
	string playerName;
	int playerHp;

	cout << "�÷��̾��� �̸�: ";
	cin >> playerName;

	cout << "�÷��̾��� ü��: ";
	cin >> playerHp;

	Player human(playerName, playerHp);

	cout << "���� ��ȣ ��ų�� ����! (MP + 1)" << endl;
	++human; // ���� ������ ++ �����ε� �����ϱ�

	cout << "���丮�� �ϳ� �Ծ���! (HP + 20)" << endl;
	human += 20; // ���� ������ += �����ε� �����ϱ�
	human.printInfo();

	return 0;
}

*/

/* ���� 3 - �̿�

�� ������ ��踦 ���� Statistics Ŭ������ ����� ���̴�.
!, >>, << ~ ������ �Լ��� ����ÿ�

���� - 1
<���> ���� ��� ����Ÿ�� �����ϴ�.
<���> 5 ���� ������ �Է��϶�>> <�Է�> 10 10 10 10 10
<���> 10 10 10 10 10 100 200
<���> avg=50

���� - 2
<���> ���� ��� ����Ÿ�� �����ϴ�.
<���> 5 ���� ������ �Է��϶�>> <�Է�> 15 30 20 25 15
<���> 15 30 20 25 15 100 200
<���> avg=57


#include
#include
using namespace std;

class Statistics {
	int capacity;
	int size;
	int* p;
public:
	Statistics(int n = 10) {
		capacity = 10;
		size = 0;
		p = new int[capacity];
	}
	~Statistics() {
		if (p) delete[] p;
	}

	Statistics& operator << ();
	Statistics& operator >> ();
	bool operator ! ();
	Statistics& operator ~ ();
};

Statistics& Statistics::operator << () {
	if (size == capacity) {
		int* q = new int[capacity * 2];
		for (int i = 0; i < size; i++) q[i] = p[i];
		capacity *= 2;
		delete[] p;
		p = q;
	}
  //�����͸� ��� ���� p �迭�� �����ϴ� ������ << �����ε�
}

Statistics& Statistics::operator >> () {
  //��������� ����Ǿ��ִ� �������� ����� ����ϴ� >> �����ε�
}

bool Statistics::operator ! () {
//size�� 0�� ���ٸ� true ��ȯ
// �׷��� ������ false ��ȯ
}

Statistics& Statistics::operator ~ () {
//��� �����͸� ����ϴ� ~ ������ �����ε�
}

int main() {
	Statistics stat;
	if (!stat) cout << "���� ��� ����Ÿ�� �����ϴ�." << endl;

	int x[5];
	cout << "5 ���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; i++) {
		cin >> x[i]; // x[i]�� ���� �Է�
	}


	for (int i = 0; i < 5; i++) {
		stat << x[i]; // x[i] ���� ��� ��ü�� �����Ѵ�.
	}

	stat << 100 << 200; // 100, 200�� ��� ��ü�� �����Ѵ�.
	~stat; // ��� ����Ÿ�� ��� ����Ѵ�.

	int avg;
	stat >> avg;  // ��� ��ü�� ���� ����� �޴´�.
	cout << "avg=" << avg << endl; // ����� ����Ѵ�
}

*/

/* ���� 4

å�� ������ �Է¹ް�, ù��° å�� ������ 500���� ������Ű��
�ι�° å�� ������ 500�� ���ҽ�Ű�� �ڵ带 �ۼ��Ͻÿ�.

å�� ������ ������Ű�� ���� += ������ �ߺ��� ����ϰ�
å�� ������ ���ҽ�Ű�� ���� -= ������ �ߺ��� ����Ͻÿ�.

���� - 1
<���> ù ��° å�� ������ �Է��ϼ���:
<���> ����: <�Է�> ������Ʈ
<���> ����: <�Է�> 10000
<���> ������ ��: <�Է�> 80
<���> �� ��° å�� ������ �Է��ϼ���:
<���> ����: <�Է�> JAVA�� ����
<���> ����: <�Է�> 20000
<���> ������ ��: <�Է�> 100

<���> å ����:
<���> ������Ʈ 10500�� 80 ������
<���> JAVA�� ���� 19500�� 100 ������

#include
#include
using namespace std;

class Book {
	string title;
	int price;
	int pages;

public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price;  this->pages = pages;
	}

	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}

	string getTitle() { return title; }
	 operator +=();
	 operator -=();
};

 Book::operator +=( {

}

 Book::operator -=() {

}

int main() {
	string title;
	int price, pages;

	cout << "ù ��° å�� ������ �Է��ϼ���:" << endl;
	cout << "����: ";
	getline(cin, title);

	cout << "����: ";
	cin >> price;

	cout << "������ ��: ";
	cin >> pages;

	cin.ignore(); // �Է� ���� ����

	Book a(title, price, pages);

	cout << "�� ��° å�� ������ �Է��ϼ���:" << endl;
	cout << "����: ";
	getline(cin, title);

	cout << "����: ";
	cin >> price;

	cout << "������ ��: ";
	cin >> pages;

	Book b(title, price, pages);

	a += 500; // å a�� ���� 500�� ����
	b -= 500; // å b�� ���� 500�� ����

	cout << endl << "å ����:" << endl;
	a.show();
	b.show();

	return 0;
}

*/

/* ����

#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price;
	int pages;

public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price;  this->pages = pages;
	}

	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}

	string getTitle() { return title; }
	Book&  operator +=(int a);
	Book& operator -=(int a);
};

Book& Book::operator +=(int a){
	price += a;
	return*this;
}

Book& Book::operator -=(int a) {
	price -= a;
	return*this;
}

int main() {
	string title;
	int price, pages;

	cout << "ù ��° å�� ������ �Է��ϼ���:" << endl;
	cout << "����: ";
	getline(cin, title);

	cout << "����: ";
	cin >> price;

	cout << "������ ��: ";
	cin >> pages;

	cin.ignore(); // �Է� ���� ����

	Book a(title, price, pages);

	cout << "�� ��° å�� ������ �Է��ϼ���:" << endl;
	cout << "����: ";
	getline(cin, title);

	cout << "����: ";
	cin >> price;

	cout << "������ ��: ";
	cin >> pages;

	Book b(title, price, pages);

	a += 500; // å a�� ���� 500�� ����
	b -= 500; // å b�� ���� 500�� ����

	cout << endl << "å ����:" << endl;
	a.show();
	b.show();

	return 0;
}

*/

/* ���� 5

����� Ŭ������ �ٸ� Ŭ������ �Ӽ��� ����� ������ �� �ֵ��� ���ִ� ���̴�.
��, �ϳ��� Ŭ����(�ڽ� Ŭ���� �Ǵ� �Ļ� Ŭ����)�� �ٸ� Ŭ����(�θ� Ŭ���� �Ǵ� �⺻ Ŭ����)�� ��� ������ ��� �Լ��� �ڽ��� Ŭ���� ������ ����� �� �ְ� �Ѵ�.

�� ���������� Person Ŭ������ �⺻Ŭ����, Student Ŭ������ Person��
��ӹ��� �Ļ�Ŭ�������Ͽ� �л������� �Է¹ް� ����ϴ� �����̴�.
�Ʒ� �ҽ��ڵ忡�� Person Ŭ������ Student Ŭ������ �ϼ��Ͻÿ�.

*main�Լ��� ������ �� ����.

���� - 1
<���>Enter student's name: <�Է�>����ȣ
<���>Enter student's age: <�Է�>33
<���>Enter student's major: <�Է�>��ǻ�Ͱ���

<���>Student Information:
<���>Name: ����ȣ, Age: 33
<���>Major: ��ǻ�Ͱ���

���� - 2
<���>Enter student's name: <�Է�>�տ���
<���>Enter student's age: <�Է�>55
<���>Enter student's major: <�Է�>�䱫����ġ��

<���>Student Information:
<���>Name: �տ���, Age: 55
<���>Major: �䱫����ġ


#include
#include
using namespace std;

class Person {
	string name;
	int age;
public:
	// ������, ��� ���� �ʱ�ȭ
	Person() :  {}
	// ���� ���
	void printInfo() {
		cout << "Name: " << << ", Age: " << << endl;
	}
};

class Student : public Person {
	string s_major;
public:
	// ������, ��� ���� �ʱ�ȭ
	Student() :   {}
	// ���� ���
	void printInfo() {
		//����ó�� ����ϱ� ���ؼ��� ������ �ؾ��ұ�?
		cout << "Major: " << s_major<< endl;
	}
};

int main() {
	// �л� ���� �Է�
	string name, s_major;
	int age;
	cout << "Enter student's name: ";
	cin >> name;
	cout << "Enter student's age: ";
	cin >> age;
	cout << "Enter student's major: ";
	cin >> s_major;

	// Student ��ü ����
	Student student(name, age, s_major);

	// �л� ���� ���
	cout << "\nStudent Information:\n";
	student.printInfo();

	return 0;
}

*/

/* ����

#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	int age;
public:
	// ������, ��� ���� �ʱ�ȭ
	Person(string n, int a) : name(n), age(a) {}
	// ���� ���
	void printInfo() const {
		cout << "Name: " << name << ", Age: " << age << endl;
	}
};

class Student : public Person {
	string s_major;
public:
	// ������, ��� ���� �ʱ�ȭ
	Student(string n, int a, string major) : Person(n, a), s_major(major) {}
	// ���� ���
	void printInfo() const {
		Person::printInfo();
		cout << "Major: " << s_major << endl;
	}
};

int main() {
	// �л� ���� �Է�
	string name, s_major;
	int age;
	cout << "Enter student's name: ";
	cin >> name;
	cout << "Enter student's age: ";
	cin >> age;
	cout << "Enter student's major: ";
	cin.ignore(); // ���� ����
	getline(cin, s_major);

	// Student ��ü ����
	Student student(name, age, s_major);

	// �л� ���� ���
	cout << "\nStudent Information:\n";
	student.printInfo();

	return 0;
}

*/

/* ���� 6

C++������ �� ĳ����(up-casting)�̶�
�Ļ� Ŭ������ ��ü�� �⺻ Ŭ������ �����ͷ� ����Ű�� ���� ���ϸ�,
�ٿ� ĳ����(down-casting)�� �⺻ Ŭ���� �����ͳ� ������ ����Ű��
��ü�� �Ļ� Ŭ������ �����ͷ� ����Ű�� ���̴�.

//��ĳ���� ����
class Base {
	// Base Ŭ������ �����
};
class Derived : public Base {
	// Derived Ŭ������ �����
};
Derived derivedObj;
Base* basePtr = &derivedObj; // ��ĳ����

//�ٿ�ĳ���� ����
class Base {
	// Base Ŭ������ �����
};
class Derived : public Base {
	// Derived Ŭ������ �����
};
Base* basePtr = new Derived();
Derived* derivedPtr = (Derived*)basePtr; // �ٿ�ĳ����


�� ���������� '10 ���� ���� - 1'�� ��������,
�л������� ��� �� �� ��ĳ���ð� �ٿ�ĳ������ ����Ѵ�.

���� - 1
<���>Enter student's name: <�Է�>����ȣ
<���>Enter student's age: <�Է�>33
<���>Enter student's major: <�Է�>��ǻ�Ͱ���

<���>Upcasting - Student Information:
<���>Name: ����ȣ, Age: 33

<���>Downcasting - Student s_major: ��ǻ�Ͱ���

#include
#include
using namespace std;

class Person {
	string name;
	int age;
public:
	// ������, ��� ���� �ʱ�ȭ
	Person(string n, int a) :  {}
	// ���� ���
	void printInfo() {
		cout << "Name: " << name << ", Age: " << age << endl;
	}
};

class Student : public Person {
	string s_major;
public:
	// ������, ��� ���� �ʱ�ȭ
	Student() : Person(n, a),  {}

	// ���� ��ȯ
	string gets_major() {

	}
};

int main() {
	// �л� ���� �Է�
	string name, s_major;
	int age;
	cout << "Enter student's name: " << endl;
	cin >> name;
	cout << "Enter student's age: " << endl;
	cin >> age;
	cout << "Enter student's major: " << endl;
	cin >> s_major;

	// Student ��ü ����
	Student student(name, age, s_major);

	// ��ĳ����: Student ��ü�� Person �����ͷ� ����Ŵ


	// ��ĳ���õ� �����͸� ����Ͽ� �л� ���� ���
	cout << "\nUpcasting - Student Information:\n";


	// �ٿ�ĳ����: Person �����͸� Student �����ͷ� ��ȯ


	if (studentPtr) {
		// �ٿ�ĳ���õ� �����͸� ����Ͽ� �л��� ���� ���
		cout << "\nDowncasting - Student s_major: " <<  << endl;
	}
	else {
		cout << "Downcasting failed." << std::endl;
	}

	return 0;
}

*/

/* ����

#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	int age;
public:
	// ������, ��� ���� �ʱ�ȭ
	Person(string n, int a) : name(n), age(a) {}

	// ���� ���
	void printInfo() {
		cout << "Name: " << name << ", Age: " << age << endl;
	}
};

class Student : public Person {
	string s_major;
public:
	// ������, ��� ���� �ʱ�ȭ
	Student(string n, int a, string m) : Person(n, a), s_major(m) {}
	// ���� ��ȯ
	string gets_major() {
		return s_major;
	}
};

int main() {
	// �л� ���� �Է�
	string name, s_major;
	int age;
	cout << "Enter student's name: " << endl;
	cin >> name;
	cout << "Enter student's age: " << endl;
	cin >> age;
	cout << "Enter student's major: " << endl;
	cin >> s_major;

	// Student ��ü ����
	Student student(name, age, s_major);

	// ��ĳ����: Student ��ü�� Person �����ͷ� ����Ŵ
	Person* personPtr = &student;

	// ��ĳ���õ� �����͸� ����Ͽ� �л� ���� ���
	cout << "\nUpcasting - Student Information:\n";
	personPtr->printInfo();

	// �ٿ�ĳ����: Person �����͸� Student �����ͷ� ��ȯ
	Student* studentPtr = static_cast<Student*>(personPtr);

	// �ٿ�ĳ���õ� �����͸� ����Ͽ� �л��� ���� ���
	cout << "\nDowncasting - Student s_major: " << studentPtr->gets_major() << endl;

	return 0;
}

*/

/* ���� 7

�� ������ �÷��̾�� ���� ���� ������ �ùķ��̼��ϴ� ���α׷��� �ۼ��ϴ� ���̴�.
�÷��̾�� ���ʹ� ���� �̸�(string), ü��(int), ����(int)�� ������ �ִ�.
�÷��̾�� ����, �÷��̾�� �÷��̾�� ���� ������ ���� �� ������,
������ ������ ü���� ���ҽ�Ų��.
�Ʒ� ��/��¿� �°� COBJ, Player, Monster Ŭ����, �����Լ� Attack�� �����Ͻÿ�.

*�������
- COBJ�� ��������� �̸�, ü��, ���⸦ ������������
   ���������ڴ� protected�̴�.
- main �Լ��� case 4,5�� �ٿ�ĳ����, ��ĳ���� �����ϱ�. �� �� main�Լ� ���� �Ұ�
- Player�� �����ڴ� �̸�, ü��, ���⸦ ���ʴ�� �Է¹޴´�.
  ���⸦ ������ �Է¹����ʾƵ� �⺻���� 10�� ���� ���´�.
- Monster�� �����ڴ� �̸�, ü��, ���⸦ ���ʴ�� �Է¹޴´�.
  ü��, ����� ������ �Է¹����ʾƵ� �⺻���� ü�� 100, ���� 1�� ���� ���´�.
- �����Լ� Attack�� �ϳ��� �����ϴ�  �Լ��̸�  3���� ��� ���� ������ �����Ѵ�.
  - �÷��̾ ���͸� ����
  - ���Ͱ� �÷��̾ ����
  - �÷��̾ �÷��̾ ����
- ������ ���� ��ü�� ü���� ������ �� ��ü�� ���⿡�� ���ݴ��� ��ü�� ü���� �� ���̴�.
	(�ʿ��ϴٸ� �����Լ� ��� : abs() )
   ex) �÷��̾� A�� ���� B�� ����
		 ���� B�� ü�� = �÷��̾� A�� ���� - ���� B ü��
- ������ �� case�� ���� �� ������ ������ �÷��̾�� ���� ������ ����Ѵ�.

���� -1
(�Է�)
1

(���)
�տ���(��)�� ���� A�� �����ߴ�!
-----�÷��̾� ����-----
-----��ü ����-----
�̸�: �տ���
ü��: 100
����: 5
-----���� ����-----
-----��ü ����-----
�̸�: ���� A
ü��: 95
����: 1

���� -2
(�Է�)
2

(���)
���� B(��)�� ȫ�浿�� �����ߴ�!
-----�÷��̾� ����-----
-----��ü ����-----
�̸�: ȫ�浿
ü��: 99
����: 10
-----���� ����-----
-----��ü ����-----
�̸�: ���� B
ü��: 200
����: 1

���� -3
(�Է�)
3

(���)
���� B(��)�� ȫ�浿�� �����ߴ�!
-----�÷��̾� ����-----
-----��ü ����-----
�̸�: ȫ�浿
ü��: 99
����: 10
-----���� ����-----
-----��ü ����-----
�̸�: ���� B
ü��: 200
����: 1

���� -4
(�Է�)
4

(���)
�÷��̾��� Ư�� �ɷ� �ߵ�!
ȫ�浿�� Ư�� �ɷ� �ߵ�! ȸ��!
-----�÷��̾� ����-----
-----��ü ����-----
�̸�: ȫ�浿
ü��: 120
����: 10

���� -5
(�Է�)
5

(���)
������ ���¢��!
���� A�� ���¢��! ���ݷ� ����!
-----���� ����-----
-----��ü ����-----
�̸�: ���� A
ü��: 100
����: 3

include
#include
#include
using namespace std;

class COBJ {
protected:
	string Name;
	int iHp;
	int iWeapon;

public:
	COBJ() : Name(), iHp(), iWeapon() {}

	string getName() {
	}
	int getWeapon() {
	}
	int getHp() {
	}
	void setHp(int _Hp) {
	}

	void getInfo() {
		cout << "-----��ü ����-----" << endl;
		cout << "�̸�: " <<  << endl;
		cout << "ü��: " <<  << endl;
		cout << "����: " <<  << endl;
	}
};

class Player : public COBJ {
public:
	Player(string _name, int _hp, int _weapon = 10) : () {}

	void getInfo() {
		cout << "-----�÷��̾� ����-----" << endl;

	}

	void specialAbility() {
		cout << this->Name << "�� Ư�� �ɷ� �ߵ�! ȸ��!" << endl;
		this->iHp += 20;
	}
};

class Monster : public COBJ {
public:
	Monster(string _name, int _hp = 100, int _weapon = 1) : () {}

	void getInfo() {
		cout << "-----���� ����-----" << endl;

	}

	void roar() {
		cout << this->Name << "�� ���¢��! ���ݷ� ����!" << endl;
		this->iWeapon += 2;
	}
};

void Attack( <Ŭ����?������������ ������� �ٲٱ�?> attacker, <Ŭ����?������������ ������� �ٲٱ�?> target) {
	cout << << "(��)�� " <<  << "�� �����ߴ�!" << endl;
   //ü�¼��� �ʿ�
}

int main() {
	Player player_1("ȫ�浿", 100);
	Player player_2("�տ���", 100, 5);
	Monster monster_A("���� A");
	Monster monster_B("���� B", 200);
	COBJ* pObj;

	int i;
	cin >> i;
	switch (i) {
	case 1: // �÷��̾ ���� ����
		Attack(player_2, monster_A);
		player_2.getInfo();
		monster_A.getInfo();
		break;
	case 2: // ���Ͱ� �÷��̾� ����
		Attack(monster_B, player_1);
		player_1.getInfo();
		monster_B.getInfo();
		break;
	case 3: // �÷��̾ �÷��̾� ����
		Attack(player_1, player_2);
		player_1.getInfo();
		player_2.getInfo();
		break;
	case 4:
		cout << "�÷��̾��� Ư�� �ɷ� �ߵ�!" << endl;
		pObj = ; //��ĳ����
		specialAbility(); //�ٿ�ĳ����
		getInfo(); //�ٿ�ĳ����
		break;
	case 5:
		cout << "������ ���¢��!" << endl;
		pObj = ; //��ĳ����
	   //�ٿ�ĳ����
		//�ٿ�ĳ����
		break;
	}

	return 0;
}

*/
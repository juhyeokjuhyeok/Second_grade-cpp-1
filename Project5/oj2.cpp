#include <iostream>
#include <string>
using namespace std;

/*문제 1

Player의 정보를 입력받고 출력하는 문제이다.
mp는 객체가 생성될 때 50의 값을 갖는다.

Player의 멤버변수는 private일 때 아래 코드를 구현하시오.

예제 - 1
<출력> 플레이어의 이름 : <입력> 유경호
<출력> 플레이어의 체력 : <입력> 100
<출력> =======Player Info=======
<출력> 유경호
<출력> 100

예제 - 2
<출력> 플레이어의 이름 : <입력> 홍길동
<출력> 플레이어의 체력 : <입력> 200
<출력> =======Player Info=======
<출력> 홍길동
<출력> 200


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

	cout << "플레이어의 이름 : ";
	cout << "플레이어의 체력 : ";

	human->printInfo();
}

*/

/* 정답

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

	cout << "플레이어의 이름 : ";
	cin >> name;
	cout << "플레이어의 체력 : ";
	cin >> hp;

	human.setHp(hp);
	human.setName(name);

	human.printInfo();
}

*/

/* 문제 2

Player의 정보를 입력받고 출력하는 문제이다.
mp는 객체가 생성될 때 50의 값을 갖는다.

신의 가호 스킬은 시전하였을 때 mp를 1씩증가하는 스킬이며,
도토리를 먹으면 HP를 20증가하는 스킬이다.

신의 가호 스킬은 단항 연산자 중 전위 ++ 연산자 중복을 사용하여 구현하고
도토리를 먹는것은 이항 연산자 중 += 연산자 중복을 사용하여 구현하라.


Player의 멤버변수는 private일 때 아래 코드를 구현하시오.


예제 - 1
<출력> 플레이어의 이름 : <입력> 유경호
<출력> 플레이어의 체력 : <입력> 100
<출력> 신의 가호 스킬을 시전! (MP +1)
<출력> 도토리를 하나 먹었다! (hp + 20)
<출력> =======Player Info=======
<출력> 이름: 유경호
<출력> 체력: 120
<출력> 마나: 51

예제 - 2
<출력> 플레이어의 이름 : <입력> 손오
<출력> 플레이어의 체력 : <입력> 300
<출력> 신의 가호 스킬을 시전! (MP +1)
<출력> 도토리를 하나 먹었다! (hp + 20)
<출력> =======Player Info=======
<출력> 이름: 손오
<출력> 체력: 320
<출력> 마나: 51

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

	Player& operator+=() { // 매개변수로 무엇을 주어야할지?
									  //내 자신을 리턴하려면?
	}

	void setName(string n) { // 사용하지 않아도 구현
	}

	void setHp(int h) { // 사용하지 않아도 구현
	}

	void printInfo() {
		cout << "=======Player Info=======" << endl;
		cout << "이름: " <<  << endl;
		cout << "체력: " <<  << endl;
		cout << "마나: " <<  << endl;
	}
};

int main() {
	string playerName;
	int playerHp;

	cout << "플레이어의 이름: ";
	cin >> playerName;

	cout << "플레이어의 체력: ";
	cin >> playerHp;

	Player human(playerName, playerHp);

	cout << "신의 가호 스킬을 시전! (MP + 1)" << endl;
	++human; // 단한 연산자 ++ 오버로딩 구현하기

	cout << "도토리를 하나 먹었다! (HP + 20)" << endl;
	human += 20; // 이항 연산자 += 오버로딩 구현하기
	human.printInfo();

	return 0;
}

*/

/* 정답

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

	Player& operator+=(int a) { // 매개변수로 무엇을 주어야할지?
		hp += a;
		return*this;
		//내 자신을 리턴하려면?
	}

	void setName(string n) { // 사용하지 않아도 구현
		name = n;
	}

	void setHp(int h) { // 사용하지 않아도 구현
		hp = h;
	}

	void printInfo() {
		cout << "=======Player Info=======" << endl;
		cout << "이름: " << name << endl;
		cout << "체력: " << hp << endl;
		cout << "마나: " << mp << endl;
	}
};

int main() {
	string playerName;
	int playerHp;

	cout << "플레이어의 이름: ";
	cin >> playerName;

	cout << "플레이어의 체력: ";
	cin >> playerHp;

	Player human(playerName, playerHp);

	cout << "신의 가호 스킬을 시전! (MP + 1)" << endl;
	++human; // 단한 연산자 ++ 오버로딩 구현하기

	cout << "도토리를 하나 먹었다! (HP + 20)" << endl;
	human += 20; // 이항 연산자 += 오버로딩 구현하기
	human.printInfo();

	return 0;
}

*/

/* 문제 3 - 미완

이 문제는 통계를 내는 Statistics 클래스를 만드는 것이다.
!, >>, << ~ 연산자 함수를 만드시오

예제 - 1
<출력> 현재 통계 데이타가 없습니다.
<출력> 5 개의 정수를 입력하라>> <입력> 10 10 10 10 10
<출력> 10 10 10 10 10 100 200
<출력> avg=50

예제 - 2
<출력> 현재 통계 데이타가 없습니다.
<출력> 5 개의 정수를 입력하라>> <입력> 15 30 20 25 15
<출력> 15 30 20 25 15 100 200
<출력> avg=57


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
  //데이터를 멤버 변수 p 배열에 삽입하는 연산자 << 오버로딩
}

Statistics& Statistics::operator >> () {
  //멤버변수에 저장되어있는 데이터의 평균을 계산하는 >> 오버로딩
}

bool Statistics::operator ! () {
//size가 0과 같다면 true 반환
// 그렇지 않으면 false 반환
}

Statistics& Statistics::operator ~ () {
//모든 데이터를 출력하는 ~ 연산자 오버로딩
}

int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이타가 없습니다." << endl;

	int x[5];
	cout << "5 개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++) {
		cin >> x[i]; // x[i]에 정수 입력
	}


	for (int i = 0; i < 5; i++) {
		stat << x[i]; // x[i] 값을 통계 객체에 삽입한다.
	}

	stat << 100 << 200; // 100, 200을 통계 객체에 삽입한다.
	~stat; // 통계 데이타를 모두 출력한다.

	int avg;
	stat >> avg;  // 통계 객체로 부터 평균을 받는다.
	cout << "avg=" << avg << endl; // 평균을 출력한다
}

*/

/* 문제 4

책의 정보를 입력받고, 첫번째 책의 가격을 500원을 증가시키고
두번째 책의 가격을 500원 감소시키는 코드를 작성하시오.

책의 정보를 증가시키는 것은 += 연산자 중복을 사용하고
책의 정보를 감소시키는 것은 -= 연산자 중복을 사용하시오.

예제 - 1
<출력> 첫 번째 책의 정보를 입력하세요:
<출력> 제목: <입력> 오브젝트
<출력> 가격: <입력> 10000
<출력> 페이지 수: <입력> 80
<출력> 두 번째 책의 정보를 입력하세요:
<출력> 제목: <입력> JAVA의 정석
<출력> 가격: <입력> 20000
<출력> 페이지 수: <입력> 100

<출력> 책 정보:
<출력> 오브젝트 10500원 80 페이지
<출력> JAVA의 정석 19500원 100 페이지

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
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
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

	cout << "첫 번째 책의 정보를 입력하세요:" << endl;
	cout << "제목: ";
	getline(cin, title);

	cout << "가격: ";
	cin >> price;

	cout << "페이지 수: ";
	cin >> pages;

	cin.ignore(); // 입력 버퍼 비우기

	Book a(title, price, pages);

	cout << "두 번째 책의 정보를 입력하세요:" << endl;
	cout << "제목: ";
	getline(cin, title);

	cout << "가격: ";
	cin >> price;

	cout << "페이지 수: ";
	cin >> pages;

	Book b(title, price, pages);

	a += 500; // 책 a의 가격 500원 증가
	b -= 500; // 책 b의 가격 500원 감소

	cout << endl << "책 정보:" << endl;
	a.show();
	b.show();

	return 0;
}

*/

/* 정답

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
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
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

	cout << "첫 번째 책의 정보를 입력하세요:" << endl;
	cout << "제목: ";
	getline(cin, title);

	cout << "가격: ";
	cin >> price;

	cout << "페이지 수: ";
	cin >> pages;

	cin.ignore(); // 입력 버퍼 비우기

	Book a(title, price, pages);

	cout << "두 번째 책의 정보를 입력하세요:" << endl;
	cout << "제목: ";
	getline(cin, title);

	cout << "가격: ";
	cin >> price;

	cout << "페이지 수: ";
	cin >> pages;

	Book b(title, price, pages);

	a += 500; // 책 a의 가격 500원 증가
	b -= 500; // 책 b의 가격 500원 감소

	cout << endl << "책 정보:" << endl;
	a.show();
	b.show();

	return 0;
}

*/

/* 문제 5

상속은 클래스가 다른 클래스의 속성과 기능을 재사용할 수 있도록 해주는 것이다.
즉, 하나의 클래스(자식 클래스 또는 파생 클래스)가 다른 클래스(부모 클래스 또는 기본 클래스)의 멤버 변수와 멤버 함수를 자신의 클래스 내에서 사용할 수 있게 한다.

이 문제에서는 Person 클래스를 기본클래스, Student 클래스를 Person을
상속받은 파생클래스로하여 학생정보를 입력받고 출력하는 문제이다.
아래 소스코드에서 Person 클래스와 Student 클래스를 완성하시오.

*main함수는 수정할 수 없다.

예제 - 1
<출력>Enter student's name: <입력>유경호
<출력>Enter student's age: <입력>33
<출력>Enter student's major: <입력>컴퓨터공학

<출력>Student Information:
<출력>Name: 유경호, Age: 33
<출력>Major: 컴퓨터공학

예제 - 2
<출력>Enter student's name: <입력>손오공
<출력>Enter student's age: <입력>55
<출력>Enter student's major: <입력>요괴물리치기

<출력>Student Information:
<출력>Name: 손오공, Age: 55
<출력>Major: 요괴물리치


#include
#include
using namespace std;

class Person {
	string name;
	int age;
public:
	// 생성자, 멤버 변수 초기화
	Person() :  {}
	// 정보 출력
	void printInfo() {
		cout << "Name: " << << ", Age: " << << endl;
	}
};

class Student : public Person {
	string s_major;
public:
	// 생성자, 멤버 변수 초기화
	Student() :   {}
	// 정보 출력
	void printInfo() {
		//예제처럼 출력하기 위해서는 무엇을 해야할까?
		cout << "Major: " << s_major<< endl;
	}
};

int main() {
	// 학생 정보 입력
	string name, s_major;
	int age;
	cout << "Enter student's name: ";
	cin >> name;
	cout << "Enter student's age: ";
	cin >> age;
	cout << "Enter student's major: ";
	cin >> s_major;

	// Student 객체 생성
	Student student(name, age, s_major);

	// 학생 정보 출력
	cout << "\nStudent Information:\n";
	student.printInfo();

	return 0;
}

*/

/* 정답

#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	int age;
public:
	// 생성자, 멤버 변수 초기화
	Person(string n, int a) : name(n), age(a) {}
	// 정보 출력
	void printInfo() const {
		cout << "Name: " << name << ", Age: " << age << endl;
	}
};

class Student : public Person {
	string s_major;
public:
	// 생성자, 멤버 변수 초기화
	Student(string n, int a, string major) : Person(n, a), s_major(major) {}
	// 정보 출력
	void printInfo() const {
		Person::printInfo();
		cout << "Major: " << s_major << endl;
	}
};

int main() {
	// 학생 정보 입력
	string name, s_major;
	int age;
	cout << "Enter student's name: ";
	cin >> name;
	cout << "Enter student's age: ";
	cin >> age;
	cout << "Enter student's major: ";
	cin.ignore(); // 버퍼 비우기
	getline(cin, s_major);

	// Student 객체 생성
	Student student(name, age, s_major);

	// 학생 정보 출력
	cout << "\nStudent Information:\n";
	student.printInfo();

	return 0;
}

*/

/* 문제 6

C++에서의 업 캐스팅(up-casting)이란
파생 클래스의 객체를 기본 클래스의 포인터로 가리키는 것을 말하며,
다운 캐스팅(down-casting)은 기본 클래스 포인터나 참조가 가리키는
객체를 파생 클래스의 포인터로 가리키는 것이다.

//업캐스팅 설명
class Base {
	// Base 클래스의 멤버들
};
class Derived : public Base {
	// Derived 클래스의 멤버들
};
Derived derivedObj;
Base* basePtr = &derivedObj; // 업캐스팅

//다운캐스팅 설명
class Base {
	// Base 클래스의 멤버들
};
class Derived : public Base {
	// Derived 클래스의 멤버들
};
Base* basePtr = new Derived();
Derived* derivedPtr = (Derived*)basePtr; // 다운캐스팅


이 문제에서는 '10 주차 과제 - 1'의 변형으로,
학생정보를 출력 할 때 업캐스팅과 다운캐스팅을 사용한다.

예제 - 1
<출력>Enter student's name: <입력>유경호
<출력>Enter student's age: <입력>33
<출력>Enter student's major: <입력>컴퓨터공학

<출력>Upcasting - Student Information:
<출력>Name: 유경호, Age: 33

<출력>Downcasting - Student s_major: 컴퓨터공학

#include
#include
using namespace std;

class Person {
	string name;
	int age;
public:
	// 생성자, 멤버 변수 초기화
	Person(string n, int a) :  {}
	// 정보 출력
	void printInfo() {
		cout << "Name: " << name << ", Age: " << age << endl;
	}
};

class Student : public Person {
	string s_major;
public:
	// 생성자, 멤버 변수 초기화
	Student() : Person(n, a),  {}

	// 전공 반환
	string gets_major() {

	}
};

int main() {
	// 학생 정보 입력
	string name, s_major;
	int age;
	cout << "Enter student's name: " << endl;
	cin >> name;
	cout << "Enter student's age: " << endl;
	cin >> age;
	cout << "Enter student's major: " << endl;
	cin >> s_major;

	// Student 객체 생성
	Student student(name, age, s_major);

	// 업캐스팅: Student 객체를 Person 포인터로 가리킴


	// 업캐스팅된 포인터를 사용하여 학생 정보 출력
	cout << "\nUpcasting - Student Information:\n";


	// 다운캐스팅: Person 포인터를 Student 포인터로 변환


	if (studentPtr) {
		// 다운캐스팅된 포인터를 사용하여 학생의 전공 출력
		cout << "\nDowncasting - Student s_major: " <<  << endl;
	}
	else {
		cout << "Downcasting failed." << std::endl;
	}

	return 0;
}

*/

/* 정답

#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	int age;
public:
	// 생성자, 멤버 변수 초기화
	Person(string n, int a) : name(n), age(a) {}

	// 정보 출력
	void printInfo() {
		cout << "Name: " << name << ", Age: " << age << endl;
	}
};

class Student : public Person {
	string s_major;
public:
	// 생성자, 멤버 변수 초기화
	Student(string n, int a, string m) : Person(n, a), s_major(m) {}
	// 전공 반환
	string gets_major() {
		return s_major;
	}
};

int main() {
	// 학생 정보 입력
	string name, s_major;
	int age;
	cout << "Enter student's name: " << endl;
	cin >> name;
	cout << "Enter student's age: " << endl;
	cin >> age;
	cout << "Enter student's major: " << endl;
	cin >> s_major;

	// Student 객체 생성
	Student student(name, age, s_major);

	// 업캐스팅: Student 객체를 Person 포인터로 가리킴
	Person* personPtr = &student;

	// 업캐스팅된 포인터를 사용하여 학생 정보 출력
	cout << "\nUpcasting - Student Information:\n";
	personPtr->printInfo();

	// 다운캐스팅: Person 포인터를 Student 포인터로 변환
	Student* studentPtr = static_cast<Student*>(personPtr);

	// 다운캐스팅된 포인터를 사용하여 학생의 전공 출력
	cout << "\nDowncasting - Student s_major: " << studentPtr->gets_major() << endl;

	return 0;
}

*/

/* 문제 7

이 문제는 플레이어와 몬스터 간의 전투를 시뮬레이션하는 프로그램을 작성하는 것이다.
플레이어와 몬스터는 각각 이름(string), 체력(int), 무기(int)를 가지고 있다.
플레이어와 몬스터, 플레이어와 플레이어는 서로 공격을 가할 수 있으며,
공격은 상대방의 체력을 감소시킨다.
아래 입/출력에 맞게 COBJ, Player, Monster 클래스, 전혁함수 Attack을 구현하시오.

*제약사항
- COBJ의 멤버변수는 이름, 체력, 무기를 가지고있으며
   접근지정자는 protected이다.
- main 함수의 case 4,5의 다운캐스팅, 업캐스팅 구현하기. 그 외 main함수 수정 불가
- Player의 생성자는 이름, 체력, 무기를 차례대로 입력받는다.
  무기를 별도로 입력받지않아도 기본으로 10의 값을 갖는다.
- Monster의 생성자는 이름, 체력, 무기를 차례대로 입력받는다.
  체력, 무기는 별도로 입력받지않아도 기본으로 체력 100, 무기 1의 값을 갖는다.
- 전역함수 Attack은 하나만 존재하는  함수이며  3가지 경우 같은 연산을 수행한다.
  - 플레이어가 몬스터를 공격
  - 몬스터가 플레이어를 공격
  - 플레이어가 플레이어를 공격
- 공격을 당한 객체의 체력은 공격을 한 객체의 무기에서 공격당한 객체의 체력을 뺀 값이다.
	(필요하다면 절댓값함수 사용 : abs() )
   ex) 플레이어 A가 몬스터 B를 공격
		 몬스터 B의 체력 = 플레이어 A의 무기 - 몬스터 B 체력
- 공격의 각 case가 끝난 후 전투를 수행한 플레이어와 몬스터 정보를 출력한다.

예제 -1
(입력)
1

(출력)
손오공(이)가 몬스터 A을 공격했다!
-----플레이어 정보-----
-----객체 정보-----
이름: 손오공
체력: 100
무기: 5
-----몬스터 정보-----
-----객체 정보-----
이름: 몬스터 A
체력: 95
무기: 1

예제 -2
(입력)
2

(출력)
몬스터 B(이)가 홍길동을 공격했다!
-----플레이어 정보-----
-----객체 정보-----
이름: 홍길동
체력: 99
무기: 10
-----몬스터 정보-----
-----객체 정보-----
이름: 몬스터 B
체력: 200
무기: 1

예제 -3
(입력)
3

(출력)
몬스터 B(이)가 홍길동을 공격했다!
-----플레이어 정보-----
-----객체 정보-----
이름: 홍길동
체력: 99
무기: 10
-----몬스터 정보-----
-----객체 정보-----
이름: 몬스터 B
체력: 200
무기: 1

예제 -4
(입력)
4

(출력)
플레이어의 특수 능력 발동!
홍길동의 특수 능력 발동! 회복!
-----플레이어 정보-----
-----객체 정보-----
이름: 홍길동
체력: 120
무기: 10

예제 -5
(입력)
5

(출력)
몬스터의 울부짖음!
몬스터 A의 울부짖음! 공격력 증가!
-----몬스터 정보-----
-----객체 정보-----
이름: 몬스터 A
체력: 100
무기: 3

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
		cout << "-----객체 정보-----" << endl;
		cout << "이름: " <<  << endl;
		cout << "체력: " <<  << endl;
		cout << "무기: " <<  << endl;
	}
};

class Player : public COBJ {
public:
	Player(string _name, int _hp, int _weapon = 10) : () {}

	void getInfo() {
		cout << "-----플레이어 정보-----" << endl;

	}

	void specialAbility() {
		cout << this->Name << "의 특수 능력 발동! 회복!" << endl;
		this->iHp += 20;
	}
};

class Monster : public COBJ {
public:
	Monster(string _name, int _hp = 100, int _weapon = 1) : () {}

	void getInfo() {
		cout << "-----몬스터 정보-----" << endl;

	}

	void roar() {
		cout << this->Name << "의 울부짖음! 공격력 증가!" << endl;
		this->iWeapon += 2;
	}
};

void Attack( <클래스?지역변수에서 멤버변수 바꾸기?> attacker, <클래스?지역변수에서 멤버변수 바꾸기?> target) {
	cout << << "(이)가 " <<  << "을 공격했다!" << endl;
   //체력세팅 필요
}

int main() {
	Player player_1("홍길동", 100);
	Player player_2("손오공", 100, 5);
	Monster monster_A("몬스터 A");
	Monster monster_B("몬스터 B", 200);
	COBJ* pObj;

	int i;
	cin >> i;
	switch (i) {
	case 1: // 플레이어가 몬스터 공격
		Attack(player_2, monster_A);
		player_2.getInfo();
		monster_A.getInfo();
		break;
	case 2: // 몬스터가 플레이어 공격
		Attack(monster_B, player_1);
		player_1.getInfo();
		monster_B.getInfo();
		break;
	case 3: // 플레이어가 플레이어 공격
		Attack(player_1, player_2);
		player_1.getInfo();
		player_2.getInfo();
		break;
	case 4:
		cout << "플레이어의 특수 능력 발동!" << endl;
		pObj = ; //업캐스팅
		specialAbility(); //다운캐스팅
		getInfo(); //다운캐스팅
		break;
	case 5:
		cout << "몬스터의 울부짖음!" << endl;
		pObj = ; //업캐스팅
	   //다운캐스팅
		//다운캐스팅
		break;
	}

	return 0;
}

*/
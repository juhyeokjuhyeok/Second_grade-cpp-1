#include <iostream> // 3주차
#include <string>
using namespace std;

/* 문제 1

아래 구조체는 도서정보를 나타낸
것이다.

struct Book {
    string title;    // 책 제목
    string author;   // 작가
    int year;        // 출판 연도
    double price;    // 가격
};

이 구조체를  클래스(class)로 만드시오.
도서정보 클래스는 멤버함수로 책정보를 입력받는 함수,
책정보를 출력하는 함수로
구성된다.

입력-1
해리포터와 마법사의 돌
J.K. 롤링
1997
10000
출력-1
책 정보 출력:
제목: 해리포터와 마법사의 돌
작가: J.K. 롤링
출판 연도: 1997
가격: $10000

*/

/* 정답 

#include <iostream>
#include <string>
using namespace std;

class Book {
public:
	string title;    // 책 제목
	string author;   // 작가
	int year;        // 출판 연도
	double price;

};

int main() {
	Book a;
	getline(cin, a.title);
	getline(cin, a.author);
	cin >> a.year >> a.price;
	//getline(cin, a.year);
	//getline(cin, a.price);

	cout << "책 정보 출력:" << '\n' << "제목: " << a.title << '\n' << "작가: " << a.author << '\n' << "출판 연도: " << a.year << '\n' << "가격: " << "$" << a.price << endl;

	return 0;
}

*/

/* 문제 2

학생에 정보를 저장하고 출력할 수 있는 클래스를 구현하시오.

학생클래스는 멤버변수는 이름,나이,성별,주소가 있으며
멤버함수는 학생정보를 출력할 수 있는 함수로 구성된다.

- 멤버변수의 접근지정자는 private
- 데이터를 입,출력하기위한 get,set 함수 구현
- 정보출력 멤버함수 구현
- 생성자, 소멸자 구현
- 클래스 인터페이스와 구현부를 분리하여 작성

입력-1
유경호 33 남 조선대학교
출력-1
이름 유경호
나이 33
성별 남
주소 조선대학교

*/

/* 정답 

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

	cout << "이름 " << name << '\n' << "나이 " << age << '\n' << "성별 " << gender << '\n' << "주소 " << address << endl;

	return 0;

}

*/
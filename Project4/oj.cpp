#include <iostream>
#include <string>
using namespace std;

/* 문제 1

//입력 출력 값
//입력:7.5
//입력:3.5
//출력:11
//출력:26.25
//출력:4

#include < iostream >
#include < string >
using namespace std;
//여기에 class 정의...

int main() {
  float a, b;
  // float a, b, 입력 받음
  //여기에서 입력 코드 작성...

  //아래는 코드 수정 불가
  math m;
  m.a = a;
  m.b = b;
  cout << m.add() << endl; // 2 멤버 변수의 더한 값 출력
  cout << m.multi() << endl; //2 멤버 변수의 곱한 값 출력
  cout << m.minus() << endl; // 멤버 변수 a-b 값
  return 0;
}

*/

/* 정답

#include <iostream>
#include <string>
using namespace std;
//여기에 class 정의...
class math {
public:
	float a=0;
	float b=0;
public:
	float sum = 0;
	float add() {
		sum = a + b;
		return sum;
	}
	float multi() {
		sum = a * b;
		return sum;
	}
	float minus() {
		sum = a - b;
		return sum;
	}
};

int main() {
	float a, b;
	// float a, b, 입력 받음
	//여기에서 입력 코드 작성...
	cin >> a >> b;
	//아래는 코드 수정 불가
	math m;
	m.a = a;
	m.b = b;
	cout << m.add() << endl; // 2 멤버 변수의 더한 값 출력
	cout << m.multi() << endl; //2 멤버 변수의 곱한 값 출력
	cout << m.minus() << endl; // 멤버 변수 a-b 값
	return 0;
}

*/

/* 문제 2

//입력 출력 예시
//입력:Jack
//입력:54
//입력:32
//출력:54 32
//출력:100 100
//출력:Jack attacks
//출력:Jack 소멸자

#include < iostream >
#include < string >
using namespace std;

class weopon{
public:
  int attack, defense;
  // 생성자와 멤버 함수 구현
  ...
};

//필요한 class 구현, 생성자 소멸자 구현
...

//main 함수는 수정 불가
int main() {
  string name;
  int a, b;
  cin >> name;
  cin >> a;
  cin >> b;
  weopon knife(a,b);
  knife.print();
  weopon fork;
  fork.print();
  killer jack(name, knife);
  jack.attack();
  return 0;
}

*/

/* 정답 

#include <iostream>
#include <string>
using namespace std;

class weopon {
public:
	int attack, defense;
	// 생성자와 멤버 함수 구현
public:
	void print() {
		cout << attack << " " << defense << endl;
	}
public:
	weopon() {
		attack = 100;
		defense = 100;
	}
	weopon(int c, int d) {
		attack = c;
		defense = d;
	}
	~weopon() {}
};

//필요한 class 구현, 생성자 소멸자 구현
class killer {
	string a;
public:
	void attack() {
		cout << a << " attacks" << endl;
	}
public:
	killer() {}
	killer(string c, weopon ab) {
		a  = c;

	}
	~killer() {
		cout << a << " 소멸자" << endl;
	}
};

//main 함수는 수정 불가
int main() {
	string name;
	int a, b;
	cin >> name;
	cin >> a;
	cin >> b;
	weopon knife(a, b);
	knife.print();
	weopon fork;
	fork.print();
	killer jack(name, knife);
	jack.attack();
	return 0;
}

*/

/* 문제 3

//입출력 예시
//입력:2
//입력:3
//출력:(2, 3)
//출력:(4, 6)
//출력:(4, 6)
//출력:4 6

#include < iostream >
using namespace std;

class point{
  int x,y; //private멤버 변수
public:
  //여기에 멤버 함수 작성...
 ...

};

//아래 main 함수는 변경 불가.
int main() {
  int i,j;
  cin >> i;
  cin >> j;
  point a;
  a.set(i,j); //x,y에 i,j 값
  a.print();
  *a.x_ptr() = i*2;
  *a.y_ptr() = j*2;
  a.print(); // x, y 값 변경 확인
  a.ptr()->print();
  a.get(&i, &j);
  cout << i << " " << j << endl;

}

*/

/* 정답 

#include <iostream>
#include <string>
using namespace std;

class point {
	int x, y; //private멤버 변수
public:
	//여기에 멤버 함수 작성...
	void set(int a, int b) {
		x = a;
		y = b;
	}
	void print() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
	int* x_ptr() {
		x = x * 2;
		return &x;
	}
	int* y_ptr() {
		y = y * 2;
		return &y;
	}
	point* ptr() {
		return this;
	}

	void get(int *a, int *b) {
		*a = x;
		*b = y;
	}

public:
	point() {}
	~point() {}
};

//아래 main 함수는 변경 불가.
int main() {
	int i, j;
	cin >> i;
	cin >> j;
	point a;
	a.set(i, j); //x,y에 i,j 값
	a.print();
	*a.x_ptr() = i * 2;
	*a.y_ptr() = j * 2;
	a.print(); // x, y 값 변경 확인
	a.ptr()->print();
	a.get(&i, &j);
	cout << i << " " << j << endl;

}

*/

/* 문제 4

//입출력 예시
//입력:3
//입력:abc
//입력:efg
//입력:hij
//출력:hij
//출력:efg
//출력:abc
//출력:size=3 소멸자 함수

#include < iostream >
#include < string >
using namespace std;

class string_stack{
  string *ptr;
  int size;
  int top_idx;
public:
  //여기에 멤버 함수 작성, 추가 멤버 변수는 선언 금지.
  //소멸자 함수 구현

};

//아래 main 함수는 변경 불가
int main() {
  int size;
  string str;
  cin >> size;
  string_stack stack(size);
  for( int i = 0 ; i < size; i++){
	cin >> str;
	stack.push(str);
  }
 for( int i = 0 ; i < size; i++){
	cout << stack.pop() << endl;
  }
}

*/

/* 정답 

#include <iostream>
#include <string>
using namespace std;

class string_stack {
	string* ptr;
	int size;
	int top_idx;
public:
	void push(const string& value) {
		if (top_idx == size - 1) {
			cout << "Stack overflow!" << endl;
			return;
		}
		ptr[++top_idx] = value;
	}

	string pop() {
		if (top_idx == -1) {
			cout << "Stack underflow!" << endl;
			return "";
		}
		return ptr[top_idx--];
	}
public:
	string_stack(int s) : size(s), top_idx(-1) {
		ptr = new string[size];
	}

	~string_stack() {
		delete[] ptr;
		cout << "size=" << size << " 소멸자 함수" << endl;
	}
};

//아래 main 함수는 변경 불가
int main() {
	int size;
	string str;
	cin >> size;
	string_stack stack(size);
	for (int i = 0; i < size; i++) {
		cin >> str;
		stack.push(str);
	}
	for (int i = 0; i < size; i++) {
		cout << stack.pop() << endl;
	}
}

*/

/*문제 5 

//입출력 예시
//입력:Fargo
//입력:Cohen
//입력:1996
//입력:512
//출력:Fargo by Cohen 1996 512 pages
//출력:Fargo by Cohen -1 -1 pages
//출력:book by author -1 -1 pages
//출력:Cohen
//출력:Cohen
//출력:1996
//출력:1996
//출력:Fargo by Cohen 1996 512 pages
//출력:Fargo by Cohen 1996 512 pages

#include < iostream >
#include < string >
using namespace std;
//함수 중복, default values

class book{
  string title, author;
  int year, pages;
public:
  //여기에 코드 작성


};

//함수 작성.


//아래 main함수는 수정 불가
int main() {
  string name;
  string title;
  int y,p;
  cin >> title;
  cin >> name;
  cin >> y;
  cin >> p;
  book a(title, name, y, p);
  book b(title, name);
  book c;
  a.print();
  b.print();
  c.print();
  print_twice(name); //2번 출력
  print_twice(y); //2번 출력
  print_twice(a); //2번 출력
  return 0;
}

*/

/* 정답 

#include <iostream>
#include <string>
using namespace std;

//함수 중복, default values

class book {
	string title, author;
	int year, pages;
public:
	//여기에 코드 작성
	void print() {
		cout << title << " by " << author << " " << year << " " << pages << " pages" << endl;
	}
public:
	book() {
		title = "book";
		author = "author";
		year = -1;
		pages = -1;
	}
	book(string a, string b, int c, int d) {
		title = a;
		author = b;
		year = c;
		pages = d;
	}
	book(string a, string b) {
		title = a;
		author = b;
		year = -1;
		pages = -1;
	}
	~book() {}
};

//함수 작성.
	void print_twice(string a) {
		cout << a << endl;
		cout << a << endl;
	}
	void print_twice(int a) {
		cout << a << endl;
		cout << a << endl;
	}
	void print_twice(book a) {
		a.print();
		a.print();
	}

//아래 main함수는 수정 불가
int main() {
	string name;
	string title;
	int y, p;
	cin >> title;
	cin >> name;
	cin >> y;
	cin >> p;
	book a(title, name, y, p);
	book b(title, name);
	book c;
	a.print();
	b.print();
	c.print();
	print_twice(name); //2번 출력
	print_twice(y); //2번 출력
	print_twice(a); //2번 출력
	return 0;
}

*/

/* 문제 6

// static 변수를 이용하여 bit_coin 객체가 몇개 사용되고 있는지 출력하라...
// hint: bit_coin이 새성될때 static 변수를 1개 더해주고, 소멸할때 1번 빼주면... 사용되고 있는 객체의 수를 알 수 있음.

//입출력 예시
//입력:4
//출력:1 처음에는 bit_coin 객체 0개
//출력:2 bit_coin 객체 4개
//출력:3 bit_coin 객체 7개
//출력:4 bit_coin 객체 15개
//출력:5 bit_coin 객체 11개
//출력:6 bit_coin 객체 12개
//출력:7 bit_coin 객체 4개

#include
#include
using namespace std;

//여기에 bit_coin class 구현


//아래 main 함수수정 불가
int main() {
  int n;
  cin >> n;

  cout << "1 처음에는 bit_coin 객체 "<< bit_coin::get_number_of_bit_coin() << "개" << endl;
  bit_coin *china;
  china = new bit_coin [n];
  cout << "2 bit_coin 객체 " << bit_coin::get_number_of_bit_coin() << "개" << endl;
  bit_coin *korea;
  korea = new bit_coin [n-1];
  cout << "3 bit_coin 객체 " << bit_coin::get_number_of_bit_coin() << "개" << endl;
  bit_coin *usa;
  usa = new bit_coin [n*2];
  cout << "4 bit_coin 객체 " << bit_coin::get_number_of_bit_coin() << "개" << endl;
  delete [] china;
  cout << "5 bit_coin 객체 " << bit_coin::get_number_of_bit_coin() << "개" << endl;
  bit_coin mybitcoin;
  cout << "6 bit_coin 객체 " << bit_coin::get_number_of_bit_coin() << "개" << endl;
  delete [] usa;
  cout << "7 bit_coin 객체 " << bit_coin::get_number_of_bit_coin() << "개" << endl;
  delete [] korea;
}

*/

/* 정답

#include <iostream>
#include <string>
using namespace std;

class bit_coin {
private:
	static int bitcoin;
public:
	static int get_number_of_bit_coin() {
		return bitcoin;
	}
public:
	bit_coin() {
		bitcoin++;
	}
	~bit_coin() {
		bitcoin--;
	}
};

int bit_coin::bitcoin = 0;

int main() {
	int n;
	cin >> n;

	cout << "1 처음에는 bit_coin 객체 " << bit_coin::get_number_of_bit_coin() << "개" << endl;
	bit_coin* china;
	china = new bit_coin[n];
	cout << "2 bit_coin 객체 " << bit_coin::get_number_of_bit_coin() << "개" << endl;
	bit_coin* korea;
	korea = new bit_coin[n - 1];
	cout << "3 bit_coin 객체 " << bit_coin::get_number_of_bit_coin() << "개" << endl;
	bit_coin* usa;
	usa = new bit_coin[n * 2];
	cout << "4 bit_coin 객체 " << bit_coin::get_number_of_bit_coin() << "개" << endl;
	delete[] china;
	cout << "5 bit_coin 객체 " << bit_coin::get_number_of_bit_coin() << "개" << endl;
	bit_coin mybitcoin;
	cout << "6 bit_coin 객체 " << bit_coin::get_number_of_bit_coin() << "개" << endl;
	delete[] usa;
	cout << "7 bit_coin 객체 " << bit_coin::get_number_of_bit_coin() << "개" << endl;
	delete[] korea;
}

*/

/* 문제 7

//입출력 예시
//입력:Jung
//입력:3500000
//입력:95000
//출력:Jung이 3500000원에 구매한 95000 키로미터 중고차
//출력:Jung이 3500000원에 구매한 95500 키로미터 중고차
//출력:Tyson이 500000원에 구매한 95500 키로미터 중고차

//value, pointer, reference
#include < iostream >
#include < string >
using namespace std;

class car{
  float km; //운전 키로미터
  int price;//가격
  string owner_name;//차 주인 이름
  //추가 멤버 변수는 선언 못함.
public:
  //여기에 코드 작성 ...

};

//여기에 함수 정의....

int main() {
  string name;
  float km;
  int price;
  cin >> name;
  cin >> price;
  cin >> km;
  //price 가격, name 차 주인, 차 km 키로수
  car mycar(name, price, km);
  mycar.print(); //출력:
  drive( mycar, 500); //mycar로 500 km 주행
  mycar.print(); //출력:
  sell( &mycar, "Tyson", 500000);
  mycar.print(); //출력:

}

*/

/* 정답 

#include <iostream>
#include <string>
using namespace std;

class car {
	float km; //운전 키로미터
	int price;//가격
	string owner_name;//차 주인 이름
	//추가 멤버 변수는 선언 못함.
public:
	//여기에 코드 작성 ...
	void print() {
		cout << owner_name << "이 " << price << "원에 구매한 " << km << " 키로미터 중고차" << endl;
	}
	void drive(int a) {
		km += a;
	}

	void sell(string a, int b) {
		owner_name = a;
		price = b;
	}
public:
	car(string a, int b, float c) {
		owner_name = a;
		price = b;
		km = c;
	}
	~car() {}
};

//여기에 함수 정의....
void drive(car &a, int b) {
	a.drive(b);
}

void sell(car* a, string b, int c) {
	a->sell(b, c);
}


int main() {
	string name;
	float km;
	int price;
	cin >> name;
	cin >> price;
	cin >> km;
	//price 가격, name 차 주인, 차 km 키로수
	car mycar(name, price, km);
	mycar.print(); //출력:
	drive(mycar, 500); //mycar로 500 km 주행
	mycar.print(); //출력:
	sell(&mycar, "Tyson", 500000);
	mycar.print(); //출력:

}

*/

/*문제 8

//입출력 예시
//입력:4
//출력:1 1 1 1
//출력:0 1 2 3
//출력:0 1 777 3
//출력:0 1 2 3
//출력:delete [] ptr;
//출력:delete [] ptr;

#include < iostream >
using namespace std;

//circle의 멤버 변수는 float radius이다. 다른 멤버 변수 없음.
class circle{
public:
  float radius;
  //아래에 추가 코드 작성

};

class circle_array{
  circle *ptr;
  int size; //추가 멤버 변수 없음.
public:
  //아래에 추가 코드 작성...

};

//아래 main 함수는 수정 불가
int main() {
  int size;
  cin >> size;
  circle_array c(size);//size크기의 circle 배열을 메모리 할당한다.
  c.print(); // circle_array c의 모든 circle의 radius 출력
  for( int i = 0 ; i < c.get_size(); i++){
	c.at(i).radius = i;
  }
  c.print(); //
  circle_array d(c); // 깊은? 앝은? 복사 생성자?
  d.at(size/2).radius = 777;
  d.print(); // circle_array c의 모든 circle의 radius 출력
  c.print(); // circle_array c의 모든 circle의 radius 출력
  //소멸자 추력: delete [] ptr;
}


*/
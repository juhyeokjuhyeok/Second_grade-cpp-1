#include <iostream>
#include <string>
using namespace std;

/* ���� 1

//�Է� ��� ��
//�Է�:7.5
//�Է�:3.5
//���:11
//���:26.25
//���:4

#include < iostream >
#include < string >
using namespace std;
//���⿡ class ����...

int main() {
  float a, b;
  // float a, b, �Է� ����
  //���⿡�� �Է� �ڵ� �ۼ�...

  //�Ʒ��� �ڵ� ���� �Ұ�
  math m;
  m.a = a;
  m.b = b;
  cout << m.add() << endl; // 2 ��� ������ ���� �� ���
  cout << m.multi() << endl; //2 ��� ������ ���� �� ���
  cout << m.minus() << endl; // ��� ���� a-b ��
  return 0;
}

*/

/* ����

#include <iostream>
#include <string>
using namespace std;
//���⿡ class ����...
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
	// float a, b, �Է� ����
	//���⿡�� �Է� �ڵ� �ۼ�...
	cin >> a >> b;
	//�Ʒ��� �ڵ� ���� �Ұ�
	math m;
	m.a = a;
	m.b = b;
	cout << m.add() << endl; // 2 ��� ������ ���� �� ���
	cout << m.multi() << endl; //2 ��� ������ ���� �� ���
	cout << m.minus() << endl; // ��� ���� a-b ��
	return 0;
}

*/

/* ���� 2

//�Է� ��� ����
//�Է�:Jack
//�Է�:54
//�Է�:32
//���:54 32
//���:100 100
//���:Jack attacks
//���:Jack �Ҹ���

#include < iostream >
#include < string >
using namespace std;

class weopon{
public:
  int attack, defense;
  // �����ڿ� ��� �Լ� ����
  ...
};

//�ʿ��� class ����, ������ �Ҹ��� ����
...

//main �Լ��� ���� �Ұ�
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

/* ���� 

#include <iostream>
#include <string>
using namespace std;

class weopon {
public:
	int attack, defense;
	// �����ڿ� ��� �Լ� ����
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

//�ʿ��� class ����, ������ �Ҹ��� ����
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
		cout << a << " �Ҹ���" << endl;
	}
};

//main �Լ��� ���� �Ұ�
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

/* ���� 3

//����� ����
//�Է�:2
//�Է�:3
//���:(2, 3)
//���:(4, 6)
//���:(4, 6)
//���:4 6

#include < iostream >
using namespace std;

class point{
  int x,y; //private��� ����
public:
  //���⿡ ��� �Լ� �ۼ�...
 ...

};

//�Ʒ� main �Լ��� ���� �Ұ�.
int main() {
  int i,j;
  cin >> i;
  cin >> j;
  point a;
  a.set(i,j); //x,y�� i,j ��
  a.print();
  *a.x_ptr() = i*2;
  *a.y_ptr() = j*2;
  a.print(); // x, y �� ���� Ȯ��
  a.ptr()->print();
  a.get(&i, &j);
  cout << i << " " << j << endl;

}

*/

/* ���� 

#include <iostream>
#include <string>
using namespace std;

class point {
	int x, y; //private��� ����
public:
	//���⿡ ��� �Լ� �ۼ�...
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

//�Ʒ� main �Լ��� ���� �Ұ�.
int main() {
	int i, j;
	cin >> i;
	cin >> j;
	point a;
	a.set(i, j); //x,y�� i,j ��
	a.print();
	*a.x_ptr() = i * 2;
	*a.y_ptr() = j * 2;
	a.print(); // x, y �� ���� Ȯ��
	a.ptr()->print();
	a.get(&i, &j);
	cout << i << " " << j << endl;

}

*/

/* ���� 4

//����� ����
//�Է�:3
//�Է�:abc
//�Է�:efg
//�Է�:hij
//���:hij
//���:efg
//���:abc
//���:size=3 �Ҹ��� �Լ�

#include < iostream >
#include < string >
using namespace std;

class string_stack{
  string *ptr;
  int size;
  int top_idx;
public:
  //���⿡ ��� �Լ� �ۼ�, �߰� ��� ������ ���� ����.
  //�Ҹ��� �Լ� ����

};

//�Ʒ� main �Լ��� ���� �Ұ�
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

/* ���� 

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
		cout << "size=" << size << " �Ҹ��� �Լ�" << endl;
	}
};

//�Ʒ� main �Լ��� ���� �Ұ�
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

/*���� 5 

//����� ����
//�Է�:Fargo
//�Է�:Cohen
//�Է�:1996
//�Է�:512
//���:Fargo by Cohen 1996 512 pages
//���:Fargo by Cohen -1 -1 pages
//���:book by author -1 -1 pages
//���:Cohen
//���:Cohen
//���:1996
//���:1996
//���:Fargo by Cohen 1996 512 pages
//���:Fargo by Cohen 1996 512 pages

#include < iostream >
#include < string >
using namespace std;
//�Լ� �ߺ�, default values

class book{
  string title, author;
  int year, pages;
public:
  //���⿡ �ڵ� �ۼ�


};

//�Լ� �ۼ�.


//�Ʒ� main�Լ��� ���� �Ұ�
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
  print_twice(name); //2�� ���
  print_twice(y); //2�� ���
  print_twice(a); //2�� ���
  return 0;
}

*/

/* ���� 

#include <iostream>
#include <string>
using namespace std;

//�Լ� �ߺ�, default values

class book {
	string title, author;
	int year, pages;
public:
	//���⿡ �ڵ� �ۼ�
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

//�Լ� �ۼ�.
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

//�Ʒ� main�Լ��� ���� �Ұ�
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
	print_twice(name); //2�� ���
	print_twice(y); //2�� ���
	print_twice(a); //2�� ���
	return 0;
}

*/

/* ���� 6

// static ������ �̿��Ͽ� bit_coin ��ü�� � ���ǰ� �ִ��� ����϶�...
// hint: bit_coin�� �����ɶ� static ������ 1�� �����ְ�, �Ҹ��Ҷ� 1�� ���ָ�... ���ǰ� �ִ� ��ü�� ���� �� �� ����.

//����� ����
//�Է�:4
//���:1 ó������ bit_coin ��ü 0��
//���:2 bit_coin ��ü 4��
//���:3 bit_coin ��ü 7��
//���:4 bit_coin ��ü 15��
//���:5 bit_coin ��ü 11��
//���:6 bit_coin ��ü 12��
//���:7 bit_coin ��ü 4��

#include
#include
using namespace std;

//���⿡ bit_coin class ����


//�Ʒ� main �Լ����� �Ұ�
int main() {
  int n;
  cin >> n;

  cout << "1 ó������ bit_coin ��ü "<< bit_coin::get_number_of_bit_coin() << "��" << endl;
  bit_coin *china;
  china = new bit_coin [n];
  cout << "2 bit_coin ��ü " << bit_coin::get_number_of_bit_coin() << "��" << endl;
  bit_coin *korea;
  korea = new bit_coin [n-1];
  cout << "3 bit_coin ��ü " << bit_coin::get_number_of_bit_coin() << "��" << endl;
  bit_coin *usa;
  usa = new bit_coin [n*2];
  cout << "4 bit_coin ��ü " << bit_coin::get_number_of_bit_coin() << "��" << endl;
  delete [] china;
  cout << "5 bit_coin ��ü " << bit_coin::get_number_of_bit_coin() << "��" << endl;
  bit_coin mybitcoin;
  cout << "6 bit_coin ��ü " << bit_coin::get_number_of_bit_coin() << "��" << endl;
  delete [] usa;
  cout << "7 bit_coin ��ü " << bit_coin::get_number_of_bit_coin() << "��" << endl;
  delete [] korea;
}

*/

/* ����

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

	cout << "1 ó������ bit_coin ��ü " << bit_coin::get_number_of_bit_coin() << "��" << endl;
	bit_coin* china;
	china = new bit_coin[n];
	cout << "2 bit_coin ��ü " << bit_coin::get_number_of_bit_coin() << "��" << endl;
	bit_coin* korea;
	korea = new bit_coin[n - 1];
	cout << "3 bit_coin ��ü " << bit_coin::get_number_of_bit_coin() << "��" << endl;
	bit_coin* usa;
	usa = new bit_coin[n * 2];
	cout << "4 bit_coin ��ü " << bit_coin::get_number_of_bit_coin() << "��" << endl;
	delete[] china;
	cout << "5 bit_coin ��ü " << bit_coin::get_number_of_bit_coin() << "��" << endl;
	bit_coin mybitcoin;
	cout << "6 bit_coin ��ü " << bit_coin::get_number_of_bit_coin() << "��" << endl;
	delete[] usa;
	cout << "7 bit_coin ��ü " << bit_coin::get_number_of_bit_coin() << "��" << endl;
	delete[] korea;
}

*/

/* ���� 7

//����� ����
//�Է�:Jung
//�Է�:3500000
//�Է�:95000
//���:Jung�� 3500000���� ������ 95000 Ű�ι��� �߰���
//���:Jung�� 3500000���� ������ 95500 Ű�ι��� �߰���
//���:Tyson�� 500000���� ������ 95500 Ű�ι��� �߰���

//value, pointer, reference
#include < iostream >
#include < string >
using namespace std;

class car{
  float km; //���� Ű�ι���
  int price;//����
  string owner_name;//�� ���� �̸�
  //�߰� ��� ������ ���� ����.
public:
  //���⿡ �ڵ� �ۼ� ...

};

//���⿡ �Լ� ����....

int main() {
  string name;
  float km;
  int price;
  cin >> name;
  cin >> price;
  cin >> km;
  //price ����, name �� ����, �� km Ű�μ�
  car mycar(name, price, km);
  mycar.print(); //���:
  drive( mycar, 500); //mycar�� 500 km ����
  mycar.print(); //���:
  sell( &mycar, "Tyson", 500000);
  mycar.print(); //���:

}

*/

/* ���� 

#include <iostream>
#include <string>
using namespace std;

class car {
	float km; //���� Ű�ι���
	int price;//����
	string owner_name;//�� ���� �̸�
	//�߰� ��� ������ ���� ����.
public:
	//���⿡ �ڵ� �ۼ� ...
	void print() {
		cout << owner_name << "�� " << price << "���� ������ " << km << " Ű�ι��� �߰���" << endl;
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

//���⿡ �Լ� ����....
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
	//price ����, name �� ����, �� km Ű�μ�
	car mycar(name, price, km);
	mycar.print(); //���:
	drive(mycar, 500); //mycar�� 500 km ����
	mycar.print(); //���:
	sell(&mycar, "Tyson", 500000);
	mycar.print(); //���:

}

*/

/*���� 8

//����� ����
//�Է�:4
//���:1 1 1 1
//���:0 1 2 3
//���:0 1 777 3
//���:0 1 2 3
//���:delete [] ptr;
//���:delete [] ptr;

#include < iostream >
using namespace std;

//circle�� ��� ������ float radius�̴�. �ٸ� ��� ���� ����.
class circle{
public:
  float radius;
  //�Ʒ��� �߰� �ڵ� �ۼ�

};

class circle_array{
  circle *ptr;
  int size; //�߰� ��� ���� ����.
public:
  //�Ʒ��� �߰� �ڵ� �ۼ�...

};

//�Ʒ� main �Լ��� ���� �Ұ�
int main() {
  int size;
  cin >> size;
  circle_array c(size);//sizeũ���� circle �迭�� �޸� �Ҵ��Ѵ�.
  c.print(); // circle_array c�� ��� circle�� radius ���
  for( int i = 0 ; i < c.get_size(); i++){
	c.at(i).radius = i;
  }
  c.print(); //
  circle_array d(c); // ����? ����? ���� ������?
  d.at(size/2).radius = 777;
  d.print(); // circle_array c�� ��� circle�� radius ���
  c.print(); // circle_array c�� ��� circle�� radius ���
  //�Ҹ��� �߷�: delete [] ptr;
}


*/
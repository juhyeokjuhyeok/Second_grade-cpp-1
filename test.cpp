#include <iostream> // ���� 1 
#include <string>
using namespace std;

/*
�̸�, �а�, �й��� ��������� ������ Student Ŭ������ �ۼ��ϰ�, ���� ���࿹�ÿ� ���� ����� �������� ���α׷��� �ϼ��Ͻÿ�

- ��������� private(s_name, s_dept, s_id)
- �⺻������, �Ű������� ���� ������, �Ҹ��� �ۼ�
- ��������� �̸� : ����������, ���� : ����ǻ�Ͱ��а���, �й� : 11111111 ���� �ʱ�ȭ
- ����Լ�
-- �л������� ����ϴ� showInfo()�Լ�
-- s_id�� �����ϴ� getId()�Լ�
-- c++, ���̽�, �ڹ������� �Է¹޾� ����� ����Ͽ� �����ϴ� calScore()�Լ�

******************************* [������] * *************************************

id: 11111111 �л���ü ����
�а� : ��ǻ�Ͱ��а�, �й� : 11111111, �̸� : ������
c++, ���̽�, �ڹ� ������ �Է��Ͻÿ� >> 90 80 70
�й� 11111111�� �� ���� ��������� 80�Դϴ�
�̸�, �а�, �й��� �Է��Ͻÿ� >> ȫ�浿 ������Ű� 22222222
id : 22222222 �л���ü ����
�а� : ������Ű�, �й� : 22222222, �̸� : ȫ�浿
c++, ���̽�, �ڹ� ������ �Է��Ͻÿ� >> 88 99 77
�й� 22222222�� �� ���� ��������� 88�Դϴ�
id : 22222222 �л���ü �Ҹ�
id : 11111111 �л���ü �Ҹ�

* *********************************************************************************
*/

//����
/*
#include <iostream>
using namespace std;

//Ŭ���� ���α׷� �ۼ�


// �Ʒ� main�κ� �����Ҽ� ����

int main() {
    string name, major;
    int id;
    double score;

    //�⺻������ ȣ���Ͽ� ��ü ����
    Student s1;

    s1.showInfo();
    score = s1.calScore();
    cout << "�й� " << s1.getId() << "�� �� ���� ��������� " << score << "�Դϴ�" << endl;

    //�̸�,�а�, �й��� �Է¹޾�, �Ű����� �ִ� ������ ȣ���Ͽ� ��ü ����
    cout << "�̸�, �а�, �й��� �Է��Ͻÿ�>> ";
    cin >> name >> major >> id;
    Student s2(name, major, id);
    s2.showInfo();
    score = s2.calScore();
    cout << "�й� " << s2.getId() << "�� �� ���� ��������� " << score << "�Դϴ�" << endl;
}
*/

// 1�� ���� ����
/*
#include <iostream>
using namespace std;
class Student {
private:
    string s_name;
    string s_dept;
    int s_id;
public:
    void showInfo() {
        cout << "id: " << s_id << " �л���ü ����" << endl;
        cout << "�а�: " << s_dept << ", �й�: " << s_id << ", �̸�: " << s_name << endl;
    }
    int calScore() {
        cout << "c++, ���̽�, �ڹ� ������ �Է��Ͻÿ�>> ";
        int a, b, c, d;
        cin >> a >> b >> c;
        d = (a + b + c) / 3;
        return d;
    }
    int getId() {
        return s_id;
    }

public:
    Student() {
        s_id = 11111111;
        s_dept = "��ǻ�Ͱ��а�";
        s_name = "������";
    }
    Student(string name, string major, int id) {
        s_name = name;
        s_dept = major;
        s_id = id;
    }
    ~Student() {
        cout << "id: " << s_id << " �л���ü �Ҹ�" << endl;
    }
};

// �Ʒ� main�κ� �����Ҽ� ����

int main() {
    string name, major;
    int id;
    double score;

    //�⺻������ ȣ���Ͽ� ��ü ����
    Student s1;

    s1.showInfo();
    score = s1.calScore();
    cout << "�й� " << s1.getId() << "�� �� ���� ��������� " << score << "�Դϴ�" << endl;

    //�̸�,�а�, �й��� �Է¹޾�, �Ű����� �ִ� ������ ȣ���Ͽ� ��ü ����
    cout << "�̸�, �а�, �й��� �Է��Ͻÿ�>> ";
    cin >> name >> major >> id;
    Student s2(name, major, id);
    s2.showInfo();
    score = s2.calScore();
    cout << "�й� " << s2.getId() << "�� �� ���� ��������� " << score << "�Դϴ�" << endl;
}
*/

//2�� ����
/*
Ű���忡�� ���� ������ �Է¹ް�, �� ������ŭ ���� �������� �Է¹޾�,
������ ���� ��°���� ���� ����ǵ���  CircleŬ������ �ϼ��ϰ� main()�Լ��� �ۼ��Ͻÿ�

**************************************************************************
[���������1]
���� ���� >> 3
�� 1�� ������ >> 10
�� 2�� ������ >> 2
�� 3�� ������ >> 1
������ 100���� ū ���� 1�� �Դϴ�

[���������2]
���� ���� >> 5
�� 1�� ������ >> 10
�� 2�� ������ >> 8
�� 3�� ������ >> 4
�� 4�� ������ >> 2
�� 5�� ������ >> 1
������ 100���� ū ���� 2�� �Դϴ�
* **************************************************************************
*/

//2�� ���� ����

/*
#include <iostream> 
using namespace std;

class Circle {
    int radius; // ���� ������ ��
public:
    void setRadius(int radius); // �������� �����Ѵ�.
    double getArea(); // ������ �����Ѵ�.
};
void Circle::setRadius(int radius) {
    // �ҽ��ۼ�

}
double Circle::getArea() {
    // �ҽ��ۼ� 
}
int main() {
    


     // �ҽ��ۼ�



       

    delete[] p; // ��ü �迭 �Ҹ�
}

*/

//2������ ����

/*
#include <iostream>
#include <string>
using namespace std;

class Circle {
    int radius; // ���� ������ ��
public:
    void setRadius(int radius); // �������� �����Ѵ�.
    double getArea(); // ������ �����Ѵ�.
};
void Circle::setRadius(int radius) {
    radius = radius;
}
double Circle::getArea() {
    return radius * radius * 3.14;
}
int main() {
    Circle s;
    int arr[100] = {};
    int a;
    int sum = 0;
    cout << "���� ���� >> ";
    cin >> a;
    for (int i = 0; i < a; i++) {
        cout << "�� " << i + 1 << "�� ������ >> ";
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++) {
        if (arr[i] * arr[i] * 3.14 > 100) {
            sum = sum + 1;
        }
    }
    cout << "������ 100���� ū ���� " << sum << "�� �Դϴ�" << endl;
}
*/

//3������

/*  "Room" Ŭ������ "House" Ŭ������ ����Ͽ� ���� �ִ� ���� �����ϴ� ������ ���α׷��� ������ ���Դϴ�.

  Room Ŭ����:
     ���� ����� �̸��� �� ��ȣ�� �����ϴ� Ŭ����
     �����ڸ� ���� ���� �����ϸ�, �̸��� �� ��ȣ�� ����
     �̸��� �����ϰų� �� ������ ����� �� ����

  House Ŭ����:
     �� �̸�, �ּ�, �׸��� ���� ���� ���� ����.  Room Ŭ������ ����Ͽ� �� ���� ����
     �� ����Ʈ�� �����ϰ�, �� ������ ���� �� ���� ��ȣ�� 1���� �ο�
     �� ������ ����ϰ�, ����� �̸��� �� ��ȣ�� ������� ���� ��Ʈ�ϴ� ����� �����մϴ�.
  */
  /*
  ���� - 1
  (���)Enter the number of rooms: (�Է�)4
  (���)House Name: Chosun Dormitory
  (���)Address: Gwangju
  (���)Room List:
  (���)Name: Chosun, Room NO: 1
  (���)Name: Chosun, Room NO: 2
  (���)Name: Chosun, Room NO: 3
  (���)Name: Chosun, Room NO: 4
  (���)Enter the room user's name and room number: (�Է�)KIM 2
  (���)Successfully rented the room.
  (���)Enter the room user's name and room number: (�Է�)YANG 3
  (���)Successfully rented the room.
  (���)Enter the room user's name and room number: (�Է�)LEE 4
  (���)Successfully rented the room.
  (���)Enter the room user's name and room number: (�Է�)PARK 4
  (���)Successfully rented the room.
  (���)House Name: Chosun Dormitory
  (���)Address: Gwangju
  (���)Room List:
  (���)Name: Chosun, Room NO: 1
  (���)Name: KIM, Room NO: 2
  (���)Name: YANG, Room NO: 3
  (���)Name: PARK, Room NO: 4

  ���� - 2
  (���)Enter the number of rooms: (�Է�)3
  (���)House Name: Chosun Dormitory
  (���)Address: Gwangju
  (���)Room List:
  (���)Name: Chosun, Room NO: 1
  (���)Name: Chosun, Room NO: 2
  (���)Name: Chosun, Room NO: 3
  (���)Enter the room user's name and room number:  (�Է�)KIM 4
  (���)Room number input error.
  (���)Enter the room user's name and room number:  (�Է�)LEE 1
  (���)Successfully rented the room.
  (���)Enter the room user's name and room number:  (�Է�)PARK 6
  (���)Room number input error.
  (���)House Name: Chosun Dormitory
  (���)Address: Gwangju
  (���)Room List:
  (���)Name: LEE, Room NO: 1
  (���)Name: Chosun, Room NO: 2
  (���)Name: Chosun, Room NO: 3
  */

//3������ ����

#include <iostream>
#include <string>
using namespace std;

/******************************* Room Ŭ���� ����: ���� ������ ��Ÿ���� Ŭ���� *********************************/
/*
class Room {
    string name;   // �� ����� �̸�
    int roomNO;    // �� ��ȣ
public:
    Room(string name, int roomNO);  // ������
    Room();                                 // �⺻ ������

    int getRoomNO();                     // �� ��ȣ ��ȯ
    void setRoomNO(int roomNO);    // �� ��ȣ ����
    void changeName(string name);   // ����� �̸� ����
    void showRoom();                    // �� ���� ���
};


// Room Ŭ���� ������: �Ķ���ͷ� �̸��� �� ��ȣ�� ����
Room::Room(string name, int roomNO) : name(name), roomNO(roomNO) {}


//    Room Ŭ���� �⺻ ������  �ϼ� 
// Room Ŭ���� �⺻ ������  // "Chosun"�̶�� �⺻ �̸��� 0�� �� ��ȣ�� �ʱ�ȭ
Room::Room() : Room("Chosun", 0) {}




// Room Ŭ������ ����� �̸� ���� �޼ҵ�
void Room::changeName(string name) {
    this->name = name;  // ���ο� �̸����� ����
}

// Room Ŭ������ �� ��ȣ ��ȯ �޼ҵ�
int Room::getRoomNO() {
    return this->roomNO;  // �� ��ȣ ��ȯ
}

// Room Ŭ������ �� ��ȣ ���� �޼ҵ�
void Room::setRoomNO(int roomNO) {
    this->roomNO = roomNO;  // ���ο� �� ��ȣ�� ����
}

// Room Ŭ������ �� ���� ��� �޼ҵ�
void Room::showRoom() {
    cout << "Name: " << this->name << ", Room NO: " << this->roomNO << endl;  // �� ����� �̸��� ��ȣ ���
}

// House Ŭ���� ����: ���� ���� ������ ��Ÿ���� Ŭ����
class House {
private:
    int size;           // ���� �ִ� ���� ����
    string houseName;   // �� �̸�
    string address;     // �� �ּ�
    Room* roomList;     // �� ����Ʈ
public:
    House(int size, string houseName, string address);  // ������
    void showHouse();                                   // �� ���� ���
    bool rentRoom(string name, int roomNO);             // �� ��Ʈ
    ~House();  // �Ҹ���
};

// House Ŭ���� ������: �� �̸�, �ּ�, �׸��� �� ������ �Ķ���ͷ� ����
House::House(int size, string houseName, string address)
    : size(size), houseName(houseName), address(address) {  // ��� ���� �ʱ�ȭ


    // ���� 1
    // �� ���� ������ ���� roomList ���� 
    // ������ ���� ��ȣ�� 1���� ���������� �ʱ�ȭ
    // �� ��ȣ ���� �Ҷ��� Room Ŭ������ setRoomNO() �Լ� �̿�






}

// House Ŭ���� �Ҹ���: �޸� ����
House::~House() {
    if (roomList) {  // roomList�� nullptr�� �ƴ��� Ȯ��
        delete[] roomList;  // ���� �޸� ����
    }
}


// ���� 2
// House Ŭ������ �� ��Ʈ �޼ҵ�
// �Է��� �� ��ȣ�� �����ϸ� �ش� ��ȣ�� �� ����� �̸� �����ϰ� true ����
// �Է��� �� ��ȣ�� �������� ������ false ����
bool House::rentRoom(string name, int roomNO) {

}




// House Ŭ������ �� ���� ��� �޼ҵ�
void House::showHouse() {
    cout << "House Name: " << houseName << endl;  // �� �̸� ���
    cout << "Address: " << address << endl;  // �� �ּ� ���
    cout << "Room List:" << endl;  // �� ��� ���

    for (int i = 0; i < size; ++i) {  // ��� �� ���� ���
        roomList[i].showRoom();
    }
}

// ���� �Լ�: ���α׷��� ���� ����
int main() {
    int roomSize;  // ���� ����
    string name;  // ����� �̸�
    int roomNO;  // �� ��ȣ

    cout << "Enter the number of rooms: ";  // ���� ���� �Է� �޽���
    cin >> roomSize;  // ����ڰ� �Է��� �� ���� ��������

    House chosun(roomSize, "Chosun Dormitory", "Gwangju");  // House ��ü ����

    chosun.showHouse();  // �ʱ� �� ���� ���

    // �� ��Ʈ
    for (int i = 0; i < roomSize; ++i) {  // ����ڰ� ������ ����ŭ �ݺ�
        cout << "Enter the room user's name and room number: ";  // ����� �̸��� �� ��ȣ �Է� �޽���
        cin >> name >> roomNO;  // �Է� �ޱ�

        if (chosun.rentRoom(name, roomNO)) {  // ��Ʈ ���� ���� Ȯ��
            cout << "Successfully rented the room." << endl;  // ���� �޽���
        }
        else {
            cout << "Room number input error." << endl;  // ���� �޽���
        }
    }

    chosun.showHouse();  // ���� �� ���� ���

    return 0;  // ���� �Լ��� ���������� ����� �� ��ȯ�ϴ� ��
} */

//4�� ����

//**************************************************
// �Ʒ� �ڵ�� x,y ��ǥ ���� �����ϴ� ť(Queue)Ŭ������ �����ϰ�
// �� ť�� �����ϴ� ���α׷��̴�.
// �Ʒ� ���� �������� �����Ͽ� ������ �ڵ带 �����϶�.
//**************************************************

/*
#include <iostream>
#include <string>
using namespace std;

// x,y ��ǥ ���� �����ϴ� Ŭ����
class Point {
public:
    int x, y;
    void print() { cout << "(" << x << "," << y << ")"; }
};

// Point ��ü���� �����ϴ� ���� ť
class Queue {
private:
    string* pname;    // ť�� �̸�
    Point* elements; // ť�� ���ҵ��� �����ϰ� �ִ� �迭�� �޸� �ּ�
    int capacity;     // �������� �Ҵ�� ť�� ũ�� (�ִ� ���� ����)
    int count;        // ���� ť�� ���Ե� ������ ����
    int frontIdx;     // ť�� �� �� ������ �ε���(pop()�� ����)
    int backIdx;      // ť�� �� �� ���� �� ������ �ε���(���� push()�� �ε���)
public:
    Queue(const string& name, int capacity) { // ������
        pname = new string(name);
        elements = new Point[capacity];
        this->capacity = capacity;
        count = frontIdx = backIdx = 0;
    }
    ~Queue() {
        delete pname;
        delete[] elements;
    }
    int maxSize() { return capacity; }
    int size() { return count; }
    bool empty() { return count == 0; }
    void setName(const string& name) { *pname = name; };

    void print() {
        cout << *pname << ": ";
        for (int i = frontIdx, cnt = 0; cnt < count; ++cnt, i = (i + 1) % capacity)
            elements[i].print();
        cout << endl;
    }
    bool push(const Point& item);
};

//-------------------------------------------------
// ���⿡ Queue�� ������ ��� �Լ����� �����϶�.
//-------------------------------------------------

// ť�� �� �ڿ� item�� ������
bool Queue::push(const Point& item) {
    if (count >= capacity) // ť�� ���� �� ���
        return false;
    // ���� 1: ���⿡ �Ʒ��� �ڵ带 �����Ͻÿ�.
    // item�� elements[backIdx]�� ������ ��
    // ���� ť�̹Ƿ� backIdx = (backIdx+1) % capacity; �� �� 
    // count ����
    return true;
}

//-------------------------------------------------
// �Ʒ� �Լ����� �������� ������ �ڵ�� ��ü�Ͻÿ�.
//-------------------------------------------------

// ť�� ù ���ҿ� ������ ������ ��ġ�� ���� �ٲ۴�.
void swap(Queue& queue) {
}
// ť�� �Ϻ� ���ҵ��� ����� �� �����Ѵ�.
void pop(Queue& queue) {
}
// �Ʒ� �Լ��� �Ű������� call by value �̴�. 
void printQueue(Queue q) { // �Լ� ���� ����
    q.setName("q    ");
    q.print();             // q�� ��ǥ���� ���;
}
// �� �Լ��� call by value �� ȣ���Ѵ�. 
void parameter(Queue& queue) { // �Լ� ���� ����
    printQueue(queue);
    queue.print();
}
// Ű���忡�� ��ǥ ������ �о� ť�� ������
void input(Queue& queue) {
    int count;
    // ť�� ������ ��ǥ�� ����
    cout << "input count? ";
    cin >> count;
    int space = queue.maxSize() - queue.size(); // ť�� ���� ����
    // count ���� ť�� ���� �������� �� Ŭ ��� �������� ũ�⸸ŭ ������
    if (count > space) count = space;
    for (int i = 0; i < count; i++) {
        Point p;
        cout << "input " << "x, y: ";
        cin >> p.x >> p.y; // x, y ��ǥ ���� �Է� ����
        queue.push(p);
    }
    queue.print();
}

//-------------------------------------------------
// �Ʒ� �ڵ�� ���� �Ұ�
//-------------------------------------------------

int main() {
    Point points[] = { {0,1}, {2,3}, {4,5}, {6,7}, {8,9} };
    int capacity = sizeof(points) / sizeof(points[0]);

    Queue queue("queue", capacity);
    // points[] �迭�� �ִ� ��ǥ���� ť�� ������
    for (int i = 0; i < queue.maxSize(); i++)
        queue.push(points[i]);
    queue.print(); // ť�� ��� ���Ҹ� �����

    while (true) {
        cout << endl << "menu: 0.exit 1.swap 2.pop 3.parameter 4.input >> ";
        int item;
        cin >> item;
        if (item == 0) break;
        switch (item) {
        case 1: swap(queue);      break;
        case 2: pop(queue);       break;
        case 3: parameter(queue); break;
        case 4: input(queue);     break;
        }
    }
    cout << endl << "Good bye!!" << endl;
}
*/

//**************************************************
// �ҽ� �ڵ� ��
//**************************************************

/*
============================================================================== =
== �� ���α׷��� ���� ����� �Ʒ��� ����.
============================================================================== =
queue:                                                   // queue�� ��� ����

menu: 0.exit 1.swap 2.pop 3.parameter 4.input >> 0[����] // 0�� �Է��� �� ���͸� ġ�ÿ�.

Good bye!!

*/

/*
============================================================================== =
== ���� 1
============================================================================== =
// ���α׷� �������ڸ��� �Ʒ� ������ó�� queue�� ������ ��µǵ���  
// Queue::push(const Point& item) ����Լ��� �����Ͻÿ�.
// ������ �Լ� ���� �ּ��� �����϶�.
============================================================================== =
== ������ 1
============================================================================== =
queue: (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)       // queue�� ���Ե� ���ҵ� ���

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >>

*/

/*
============================================================================== =
== ���� 2
============================================================================== =
// ���� swap(Queue& queue) �Լ��� �Ʒ� �ڵ�� ��ü�϶�.
// �Ʒ� �Լ��� queue�� ó���� ������ ������ ��ġ�� ���� �ٲٴ� �Լ��̴�.
// �̸� ���� Queue::front()�� Queue::back() �Լ��� �����϶�.
//-----------------------------------------------------------------------------
void swap(Queue & queue) {
    queue.print();
    // queue.front()�� queue.back()�� ��ǥ ������ ��ġ�� ���� �ٲ�
    Point tmp = queue.front();
    queue.front() = queue.back();
    queue.back() = tmp;
    cout << "swap(queue.front(), queue.back())" << endl;
    queue.print();
}
//-----------------------------------------------------------------------------
// Queue::front()�� ť�� �� �� ������ ������ ��ȯ�Ѵ�. ���� Ÿ���� ������ �����϶�.
// ������ ������ ���� �϶�. 
//-----------------------------------------------------------------------------
elements[frontIdx]�� ������ return�Ѵ�.

//-----------------------------------------------------------------------------
// Queue::back()�� ť�� �� �� ������ ������ ��ȯ�Ѵ�. ���� Ÿ���� ������ �����϶�.
// ������ ������ ���� �϶�. 
//-----------------------------------------------------------------------------
int idx = backIdx - 1;
if (idx < 0) idx = capacity - 1; // ���� ť�̹Ƿ�
elements[idx]�� ������ return�Ѵ�.

============================================================================== =
== ������ 2
============================================================================== =
queue: (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 1
queue : (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)
swap(queue.front(), queue.back())
queue : (8, 9)(2, 3)(4, 5)(6, 7)(0, 1)       // ť�� ó���� ������ ������ ��ġ�� �ٲ����

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 1
queue : (8, 9)(2, 3)(4, 5)(6, 7)(0, 1)
swap(queue.front(), queue.back())
queue : (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)       // ť�� ó���� ������ ������ ��ġ�� �ٲ����

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >>

*/

/*
============================================================================== =
== ���� 3
============================================================================== =
// ���� pop(Queue& queue) �Լ��� �Ʒ� �ڵ�� ��ü�϶�.
// �Ʒ� �Լ��� queue�� ���� ���� ������ ���ҵ��� ����ϰ� �ش� ���ҵ��� �����ϴ� �Լ��̴�.
// �̸� ���� Queue::pop() ����Լ��� �����϶�.
// ������ Queue Ŭ���� ���� �� ����Լ� ���� �κ��� �ּ��� �����϶�.
//-----------------------------------------------------------------------------
void pop(Queue & queue) {
    cout << "half pop: ";
    int count = queue.size() / 2;
    for (int i = 0; i < count; ++i) {
        queue.front().print();
        queue.pop();
    }
    cout << endl;
    queue.print();
}
//-----------------------------------------------------------------------------
// Queue::pop()�� ť�� �� �� ����(frontIdx) �����Ѵ�. ���� ���� ����.
// ������ ������ ���� �϶�. 
//-----------------------------------------------------------------------------
ť�� ������� �׳� �����Ѵ�;
���� ť�̹Ƿ� frontIdx = (frontIdx + 1) % capacity;
count ����;

============================================================================== =
== ������ 3
============================================================================== =
queue: (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 2
half pop : (0, 1)(2, 3)          // ť���� ���� ���ҵ� ���
queue : (4, 5)(6, 7)(8, 9)        // ť�� ���� �ִ� ���ҵ� ���; ��ü ������ ������ �����Ǿ���

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >>

*/

/*
============================================================================== =
== ���� 4
============================================================================== =
// 3�� �޴��� �����ϸ� ���α׷��� ������������ ������ ���̴�. 
// �� ������ �ذ��ϱ� ���� Queue Ŭ���� ���� ������ ������ �Ǵ� ��������� �Ǵ� ����Լ��� �����϶�.
// ���������� �����Ǿ��� ��� �Ʒ��� ���� ��µ� ���̴�.
============================================================================== =
== ������ 4
============================================================================== =
queue: (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 3
q : (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)
queue : (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)  // ���α׷� �����ʰ� ���� ����Ǿ���; �� ť�� ���� �����ؾ� ��

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >>

*/

/*
============================================================================== =
== ���� 5
============================================================================== =
// �� �������� ��� �����Ͽ����� �Ʒ�ó�� �Է��Ͽ� ���������� ����Ǿ�� �Ѵ�.  
============================================================================== =
== ������ 5
============================================================================== =
queue: (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 2
half pop : (0, 1)(2, 3)
queue : (4, 5)(6, 7)(8, 9)                 // ��ü ������ ������ ����

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 2
half pop : (4, 5)
queue : (6, 7)(8, 9)                      // ��ü ������ ������ ����

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 2
half pop : (6, 7)
queue : (8, 9)                           // ��ü ������ ������ ����

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 4
input count ? 3
input x, y : 10 20
input x, y : 30 40
input x, y : 50 60
queue : (8, 9)(10, 20)(30, 40)(50, 60)     // ������ ���Ҹ�ŭ ���� ����


menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 1
queue : (8, 9)(10, 20)(30, 40)(50, 60)
swap(queue.front(), queue.back())
queue : (50, 60)(10, 20)(30, 40)(8, 9)     // ť�� ó���� ������ ������ ��ġ�� �ٲ����

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 3
q : (50, 60)(10, 20)(30, 40)(8, 9)
queue : (50, 60)(10, 20)(30, 40)(8, 9)     // ���α׷� �����ʰ� ���� ����Ǿ���

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 2
half pop : (50, 60)(10, 20)
queue : (30, 40)(8, 9)                   // ��ü ������ ������ ����

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 0

Good bye!!
*/

//���� 5

/*
�� ������ �÷��̾�� ���� ���� ������ �ùķ��̼��ϴ� ���α׷��� �ۼ��ϴ� ���̴�.
�÷��̾�� ���ʹ� ���� �̸�(string), ü��(int), ����(int)�� ������ �ִ�.
�÷��̾�� ����, �÷��̾�� �÷��̾�� ���� ������ ���� �� ������,
������ ������ ü���� ���ҽ�Ų��.
�Ʒ� �� / ��¿� �°� Player, Monster Ŭ������ �����Լ� Attack�� �����Ͻÿ�.

* �������
- Player�� Monster Ŭ������ ��������� private(public���� ���� �Ұ�)
- main �Լ� ���� �Ұ�.
- Player�� �����ڴ� �̸�, ü��, ���⸦ ���ʴ�� �Է¹޴´�.
���⸦ ������ �Է¹����ʾƵ� �⺻���� 10�� ���� ���´�.
- Monster�� �����ڴ� �̸�, ü��, ���⸦ ���ʴ�� �Է¹޴´�.
ü��, ����� ������ �Է¹����ʾƵ� �⺻���� ü�� 100, ���� 1�� ���� ���´�.
- �����Լ� Attack�� �Լ� �̸��� ������ 3���� ��� �ٸ��� ������ �����Ѵ�.
(�Լ��� ���� �Ұ�)
- �÷��̾ ���͸� ����
- ���Ͱ� �÷��̾ ����
- �÷��̾ �÷��̾ ����
- ������ ���� ��ü�� ü���� ������ �� ��ü�� ���⿡�� ���ݴ��� ��ü�� ü���� �� ���̴�.
(�ʿ��ϴٸ� �����Լ� ��� : abs())
ex) �÷��̾� A�� ���� B�� ����
���� B�� ü�� = �÷��̾� A�� ���� - ���� B ü��
- ������ �� case�� ���� �� ������ ������ �÷��̾�� ���� ������ ����Ѵ�.
*/


/*=======================����====================*/
/*
���� - 1
(�Է�)
1

(���)
�տ���(��)�� ���� A�� �����ߴ�!
---- - �÷��̾� ����---- -
�÷��̾� �̸� : �տ���
ü�� : 100
���� : 5
---- - ���� ����---- -
���� �̸� : ���� A
ü�� : 95
���� : 1

���� - 2
(�Է�)
2

(���)
���� B(��)�� ȫ�浿�� �����ߴ�!
---- - �÷��̾� ����---- -
�÷��̾� �̸� : ȫ�浿
ü�� : 99
���� : 10
---- - ���� ����---- -
���� �̸� : ���� B
ü�� : 200
���� : 1

���� - 3
(�Է�)
3

(���)
ȫ�浿(��)�� �տ����� �����ߴ�!
---- - �÷��̾� ����---- -
�÷��̾� �̸� : ȫ�浿
ü�� : 100
���� : 10
---- - �÷��̾� ����---- -
�÷��̾� �̸� : �տ���
ü�� : 90
���� : 5

*/

/*=======================��=��=��=��====================*/

/*
class Player {
private:
    //��� ����
public:
    //��� �Լ�
};

void Player::getInfo() {
    cout << "-----�÷��̾� ����-----" << endl;
    cout << "�÷��̾� �̸� : " << << endl;
    cout << "ü�� : " << << endl;
    cout << "���� : " <<  << endl;
}


class Monster {
private:
    //��� ����
public:
    //��� �Լ�
};
void Monster::getInfo() {
    cout << "-----���� ����-----" << endl;
    cout << "���� �̸� : " <<  << endl;
    cout << "ü�� : " <<  << endl;
    cout << "���� : " <<  << endl;
}

void Attack() {
    cout << << "(��)�� " <<  << "�� �����ߴ�!" << endl;
}
void Attack() {
    cout << << "(��)�� " <<  << "�� �����ߴ�!" << endl;
}
void Attack() {
    cout << << "(��)�� " <<  << "�� �����ߴ�!" << endl;
}

int main() {

    Player player_1("ȫ�浿", 100);
    Player player_2("�տ���", 100, 5);
    Monster monster_A("���� A"), monster_B("���� B", 200);

    int i;
    cin >> i;
    switch (i)
    {
    case 1: //�÷��̾ ���� ����
        Attack(player_2, monster_A);
        player_2.getInfo();
        monster_A.getInfo();
        break;
    case 2: //���Ͱ� �÷��̾� ����
        Attack(monster_B, player_1);
        player_1.getInfo();
        monster_B.getInfo();
        break;
    case 3: //�÷��̾ �÷��̾� ����
        Attack(player_1, player_2);
        player_1.getInfo();
        player_2.getInfo();
        break;
    }
    return 0;
}

*/

// ����5 ����

/*
#include <iostream>
using namespace std;

class Player {
private:
    //��� ����
    string p_name;
    int p_health;
    int p_weapon;
public:
    //��� �Լ�
    void getInfo() {
        cout << "-----�÷��̾� ����-----" << endl;
        cout << "�÷��̾� �̸� : " << p_name << endl;
        cout << "ü�� : " << p_health << endl;
        cout << "���� : " << p_weapon << endl;
    }
    string getname() {
        return p_name;
    }
    int gethealth() {
        return p_health;
    }
    int getweapon() {
        return p_weapon;
    }
    void setresult(int a) {
        p_health = a;
    }
public:
    Player(string name, int health) {
        p_name = name;
        p_health = health;
        p_weapon = 10;
    }
    Player(string name, int health, int weapon) {
        p_name = name;
        p_health = health;
        p_weapon = weapon;
    }
    ~Player() {}
};


class Monster {
private:
    //��� ����
    string m_name;
    int m_health;
    int m_weapon;
public:
    //��� �Լ�
    void getInfo() {
        cout << "-----���� ����-----" << endl;
        cout << "���� �̸� : " << m_name << endl;
        cout << "ü�� : " << m_health << endl;
        cout << "���� : " << m_weapon << endl;
    }
    string getname() {
        return m_name;
    }
    int gethealth() {
        return m_health;
    }
    int getweapon() {
        return m_weapon;
    }
    void setresult(int a) {
        m_health = a;
    }


public:
    Monster(string name) {
        m_name = name;
        m_health = 100;
        m_weapon = 1;
    }
    Monster(string name, int health) {
        m_name = name;
        m_health = health;
        m_weapon = 1;
    }
    ~Monster() {}
};

int Attack(Player& a, Monster& b) {
    int result = 0;
    cout << a.getname() << "(��)�� " << b.getname() << "�� �����ߴ�!" << endl;
    result = b.gethealth() - a.getweapon();
    b.setresult(result);
    return result;
}
int Attack(Monster& a, Player& b) {
    int result = 0;
    cout << a.getname() << "(��)�� " << b.getname() << "�� �����ߴ�!" << endl;
    result = b.gethealth() - a.getweapon();
    b.setresult(result);
    return result;
}
int Attack(Player& a, Player& b) {
    int result = 0;
    cout << a.getname() << "(��)�� " << b.getname() << "�� �����ߴ�!" << endl;
    result = b.gethealth() - a.getweapon();
    b.setresult(result);
    return result;
}

int main() {

    Player player_1("ȫ�浿", 100);
    Player player_2("�տ���", 100, 5);
    Monster monster_A("���� A"), monster_B("���� B", 200);

    int i;
    cin >> i;
    switch (i)
    {
    case 1: //�÷��̾ ���� ����
        Attack(player_2, monster_A);
        player_2.getInfo();
        monster_A.getInfo();
        break;
    case 2: //���Ͱ� �÷��̾� ����
        Attack(monster_B, player_1);
        player_1.getInfo();
        monster_B.getInfo();
        break;
    case 3: //�÷��̾ �÷��̾� ����
        Attack(player_1, player_2);
        player_1.getInfo();
        player_2.getInfo();
        break;
    }
    return 0;
}

*/

//���� 6

/*
�� �����̴�...
�� ������ �������� 1�� 1�����ϸ� �������� �Ϸ� ���뷮�� ����ϴ� ���α׷��� �ۼ��ϴ� ���̴�.
���� �Ϸ� ���뷮 ��� Ŭ������ 'CalFood'�� ���� ������������ �Բ� ����ϱ� ������ ��ü �ϳ��� �־���Ѵ�.
���� CalFood�� ��������� ����Լ��� static���� �ۼ��ؾ��Ѵ�.
�Ʒ� �� / ��°� ������׿� �´� CalFood Ŭ������ Person Ŭ������ �ۼ��Ͻÿ�.

* �������
- CalFood�� ��������� public, Person Ŭ������ ��������� private(public���� ���� �Ұ�)
- main �Լ� ���� �Ұ�.
- CalFood�� ��������� ����Լ��� static���� �ۼ�.
- Person Ŭ������ ������ ��Ÿ���� ������� Infofood�� 1��
- CalFood�� ������ ��Ÿ���� ����ü��  ������� Infofood100��

*/

/*=======================����====================*/

/*
���� - 1
(�Է�)
���� 1000
��� 2000
�Ƹ޸�ī�� 0

(���)
* ************������ Į�θ� * ************
���� ���� ���� ���� : ���� ��� �Ƹ޸�ī��
�� Į�θ� : 3000 kcal

���� - 2
(�Է�)
����� 300
���屹 200
��ġ� 600

(���)
* ************������ Į�θ� * ************
���� ���� ���� ���� : ����� ���屹 ��ġ�
�� Į�θ� : 1100 kcal

*/

/*=======================�ҽ��ڵ�====================*/
/*
#include
#include
using namespace std;

struct Infofood {
    string food;
    int calories;
};

class CalFood {

};

void CalFood::addFood(Infofood _eatfood) {

}
class Person {

};

void CalFood::printTotalCalories() {
    int i = 0;
    cout << "************* ������ Į�θ� *************\n";
    cout << "���� ���� ���� ���� : ";
    while (i < cnt) {
        cout << food[i].food << " ";
        i++;
    }
    cout << endl;
    cout << "�� Į�θ�: " << totalCalories << " kcal" << endl;
    cout << endl;
}

int main() {
    Person human[3];
    int i = 0;

    while (i < 3) {
        Infofood eatfood;
        cin >> eatfood.food >> eatfood.calories;
        human[i].setfood(eatfood);
        i++;
    }
    CalFood::printTotalCalories();
}

*/
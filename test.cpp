#include <iostream> // 문제 1 
#include <string>
using namespace std;

/*
이름, 학과, 학번을 멤버변수로 가지는 Student 클래스를 작성하고, 다음 실행예시와 같은 결과가 나오도록 프로그램을 완성하시오

- 멤버변수는 private(s_name, s_dept, s_id)
- 기본생성자, 매개변수를 갖는 생성자, 소멸자 작성
- 멤버변수는 이름 : “김조선”, 전공 : “컴퓨터공학과”, 학번 : 11111111 으로 초기화
- 멤버함수
-- 학생정보를 출력하는 showInfo()함수
-- s_id를 리턴하는 getId()함수
-- c++, 파이썬, 자바점수를 입력받아 평균을 계산하여 리턴하는 calScore()함수

******************************* [실행결과] * *************************************

id: 11111111 학생객체 생성
학과 : 컴퓨터공학과, 학번 : 11111111, 이름 : 김조선
c++, 파이썬, 자바 점수를 입력하시오 >> 90 80 70
학번 11111111의 세 과목 평균점수는 80입니다
이름, 학과, 학번을 입력하시오 >> 홍길동 정보통신과 22222222
id : 22222222 학생객체 생성
학과 : 정보통신과, 학번 : 22222222, 이름 : 홍길동
c++, 파이썬, 자바 점수를 입력하시오 >> 88 99 77
학번 22222222의 세 과목 평균점수는 88입니다
id : 22222222 학생객체 소멸
id : 11111111 학생객체 소멸

* *********************************************************************************
*/

//뼈대
/*
#include <iostream>
using namespace std;

//클래스 프로그램 작성


// 아래 main부분 수정할수 없음

int main() {
    string name, major;
    int id;
    double score;

    //기본생성자 호출하여 객체 생성
    Student s1;

    s1.showInfo();
    score = s1.calScore();
    cout << "학번 " << s1.getId() << "의 세 과목 평균점수는 " << score << "입니다" << endl;

    //이름,학과, 학번을 입력받아, 매개변수 있는 생성자 호출하여 객체 생성
    cout << "이름, 학과, 학번을 입력하시오>> ";
    cin >> name >> major >> id;
    Student s2(name, major, id);
    s2.showInfo();
    score = s2.calScore();
    cout << "학번 " << s2.getId() << "의 세 과목 평균점수는 " << score << "입니다" << endl;
}
*/

// 1번 문제 정답
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
        cout << "id: " << s_id << " 학생객체 생성" << endl;
        cout << "학과: " << s_dept << ", 학번: " << s_id << ", 이름: " << s_name << endl;
    }
    int calScore() {
        cout << "c++, 파이썬, 자바 점수를 입력하시오>> ";
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
        s_dept = "컴퓨터공학과";
        s_name = "김조선";
    }
    Student(string name, string major, int id) {
        s_name = name;
        s_dept = major;
        s_id = id;
    }
    ~Student() {
        cout << "id: " << s_id << " 학생객체 소멸" << endl;
    }
};

// 아래 main부분 수정할수 없음

int main() {
    string name, major;
    int id;
    double score;

    //기본생성자 호출하여 객체 생성
    Student s1;

    s1.showInfo();
    score = s1.calScore();
    cout << "학번 " << s1.getId() << "의 세 과목 평균점수는 " << score << "입니다" << endl;

    //이름,학과, 학번을 입력받아, 매개변수 있는 생성자 호출하여 객체 생성
    cout << "이름, 학과, 학번을 입력하시오>> ";
    cin >> name >> major >> id;
    Student s2(name, major, id);
    s2.showInfo();
    score = s2.calScore();
    cout << "학번 " << s2.getId() << "의 세 과목 평균점수는 " << score << "입니다" << endl;
}
*/

//2번 문제
/*
키보드에서 원의 개수를 입력받고, 그 개수만큼 원의 반지름을 입력받아,
다음과 같은 출력결과와 같이 실행되도록  Circle클래스를 완성하고 main()함수를 작성하시오

**************************************************************************
[입출력형식1]
원의 개수 >> 3
원 1의 반지름 >> 10
원 2의 반지름 >> 2
원 3의 반지름 >> 1
면적이 100보다 큰 원은 1개 입니다

[입출력형식2]
원의 개수 >> 5
원 1의 반지름 >> 10
원 2의 반지름 >> 8
원 3의 반지름 >> 4
원 4의 반지름 >> 2
원 5의 반지름 >> 1
면적이 100보다 큰 원은 2개 입니다
* **************************************************************************
*/

//2번 문제 뼈대

/*
#include <iostream> 
using namespace std;

class Circle {
    int radius; // 원의 반지름 값
public:
    void setRadius(int radius); // 반지름을 설정한다.
    double getArea(); // 면적을 리턴한다.
};
void Circle::setRadius(int radius) {
    // 소스작성

}
double Circle::getArea() {
    // 소스작성 
}
int main() {
    


     // 소스작성



       

    delete[] p; // 객체 배열 소멸
}

*/

//2번문제 정답

/*
#include <iostream>
#include <string>
using namespace std;

class Circle {
    int radius; // 원의 반지름 값
public:
    void setRadius(int radius); // 반지름을 설정한다.
    double getArea(); // 면적을 리턴한다.
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
    cout << "원의 개수 >> ";
    cin >> a;
    for (int i = 0; i < a; i++) {
        cout << "원 " << i + 1 << "의 반지름 >> ";
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++) {
        if (arr[i] * arr[i] * 3.14 > 100) {
            sum = sum + 1;
        }
    }
    cout << "면적이 100보다 큰 원은 " << sum << "개 입니다" << endl;
}
*/

//3번문제

/*  "Room" 클래스와 "House" 클래스를 사용하여 집에 있는 방을 관리하는 간단한 프로그램을 구현한 것입니다.

  Room 클래스:
     방의 사용자 이름과 방 번호를 포함하는 클래스
     생성자를 통해 방을 생성하며, 이름과 방 번호를 설정
     이름을 변경하거나 방 정보를 출력할 수 있음

  House 클래스:
     집 이름, 주소, 그리고 여러 개의 방을 포함.  Room 클래스를 사용하여 방 정보 관리
     방 리스트를 생성하고, 방 개수에 따라 각 방의 번호를 1부터 부여
     방 정보를 출력하고, 사용자 이름과 방 번호를 기반으로 방을 렌트하는 기능을 제공합니다.
  */
  /*
  예제 - 1
  (출력)Enter the number of rooms: (입력)4
  (출력)House Name: Chosun Dormitory
  (출력)Address: Gwangju
  (출력)Room List:
  (출력)Name: Chosun, Room NO: 1
  (출력)Name: Chosun, Room NO: 2
  (출력)Name: Chosun, Room NO: 3
  (출력)Name: Chosun, Room NO: 4
  (출력)Enter the room user's name and room number: (입력)KIM 2
  (출력)Successfully rented the room.
  (출력)Enter the room user's name and room number: (입력)YANG 3
  (출력)Successfully rented the room.
  (출력)Enter the room user's name and room number: (입력)LEE 4
  (출력)Successfully rented the room.
  (출력)Enter the room user's name and room number: (입력)PARK 4
  (출력)Successfully rented the room.
  (출력)House Name: Chosun Dormitory
  (출력)Address: Gwangju
  (출력)Room List:
  (출력)Name: Chosun, Room NO: 1
  (출력)Name: KIM, Room NO: 2
  (출력)Name: YANG, Room NO: 3
  (출력)Name: PARK, Room NO: 4

  예제 - 2
  (출력)Enter the number of rooms: (입력)3
  (출력)House Name: Chosun Dormitory
  (출력)Address: Gwangju
  (출력)Room List:
  (출력)Name: Chosun, Room NO: 1
  (출력)Name: Chosun, Room NO: 2
  (출력)Name: Chosun, Room NO: 3
  (출력)Enter the room user's name and room number:  (입력)KIM 4
  (출력)Room number input error.
  (출력)Enter the room user's name and room number:  (입력)LEE 1
  (출력)Successfully rented the room.
  (출력)Enter the room user's name and room number:  (입력)PARK 6
  (출력)Room number input error.
  (출력)House Name: Chosun Dormitory
  (출력)Address: Gwangju
  (출력)Room List:
  (출력)Name: LEE, Room NO: 1
  (출력)Name: Chosun, Room NO: 2
  (출력)Name: Chosun, Room NO: 3
  */

//3번문제 뼈대

#include <iostream>
#include <string>
using namespace std;

/******************************* Room 클래스 정의: 방의 정보를 나타내는 클래스 *********************************/
/*
class Room {
    string name;   // 방 사용자 이름
    int roomNO;    // 방 번호
public:
    Room(string name, int roomNO);  // 생성자
    Room();                                 // 기본 생성자

    int getRoomNO();                     // 방 번호 반환
    void setRoomNO(int roomNO);    // 방 번호 설정
    void changeName(string name);   // 사용자 이름 변경
    void showRoom();                    // 방 정보 출력
};


// Room 클래스 생성자: 파라미터로 이름과 방 번호를 받음
Room::Room(string name, int roomNO) : name(name), roomNO(roomNO) {}


//    Room 클래스 기본 생성자  완성 
// Room 클래스 기본 생성자  // "Chosun"이라는 기본 이름과 0번 방 번호로 초기화
Room::Room() : Room("Chosun", 0) {}




// Room 클래스의 사용자 이름 변경 메소드
void Room::changeName(string name) {
    this->name = name;  // 새로운 이름으로 변경
}

// Room 클래스의 방 번호 반환 메소드
int Room::getRoomNO() {
    return this->roomNO;  // 방 번호 반환
}

// Room 클래스의 방 번호 설정 메소드
void Room::setRoomNO(int roomNO) {
    this->roomNO = roomNO;  // 새로운 방 번호로 설정
}

// Room 클래스의 방 정보 출력 메소드
void Room::showRoom() {
    cout << "Name: " << this->name << ", Room NO: " << this->roomNO << endl;  // 방 사용자 이름과 번호 출력
}

// House 클래스 정의: 집에 관한 정보를 나타내는 클래스
class House {
private:
    int size;           // 집에 있는 방의 개수
    string houseName;   // 집 이름
    string address;     // 집 주소
    Room* roomList;     // 방 리스트
public:
    House(int size, string houseName, string address);  // 생성자
    void showHouse();                                   // 집 정보 출력
    bool rentRoom(string name, int roomNO);             // 방 렌트
    ~House();  // 소멸자
};

// House 클래스 생성자: 집 이름, 주소, 그리고 방 개수를 파라미터로 받음
House::House(int size, string houseName, string address)
    : size(size), houseName(houseName), address(address) {  // 멤버 변수 초기화


    // 문제 1
    // 방 정보 저장을 위한 roomList 생성 
    // 생성된 방의 번호를 1부터 순차적으로 초기화
    // 방 번호 변경 할때는 Room 클래스의 setRoomNO() 함수 이용






}

// House 클래스 소멸자: 메모리 해제
House::~House() {
    if (roomList) {  // roomList가 nullptr이 아닌지 확인
        delete[] roomList;  // 동적 메모리 해제
    }
}


// 문제 2
// House 클래스의 방 렌트 메소드
// 입력한 방 번호가 존재하면 해당 번호의 방 사용자 이름 수정하고 true 리턴
// 입력한 방 번호가 존재하지 않으면 false 리턴
bool House::rentRoom(string name, int roomNO) {

}




// House 클래스의 집 정보 출력 메소드
void House::showHouse() {
    cout << "House Name: " << houseName << endl;  // 집 이름 출력
    cout << "Address: " << address << endl;  // 집 주소 출력
    cout << "Room List:" << endl;  // 방 목록 출력

    for (int i = 0; i < size; ++i) {  // 모든 방 정보 출력
        roomList[i].showRoom();
    }
}

// 메인 함수: 프로그램의 시작 지점
int main() {
    int roomSize;  // 방의 개수
    string name;  // 사용자 이름
    int roomNO;  // 방 번호

    cout << "Enter the number of rooms: ";  // 방의 개수 입력 메시지
    cin >> roomSize;  // 사용자가 입력한 방 개수 가져오기

    House chosun(roomSize, "Chosun Dormitory", "Gwangju");  // House 객체 생성

    chosun.showHouse();  // 초기 집 정보 출력

    // 방 렌트
    for (int i = 0; i < roomSize; ++i) {  // 사용자가 지정한 수만큼 반복
        cout << "Enter the room user's name and room number: ";  // 사용자 이름과 방 번호 입력 메시지
        cin >> name >> roomNO;  // 입력 받기

        if (chosun.rentRoom(name, roomNO)) {  // 렌트 성공 여부 확인
            cout << "Successfully rented the room." << endl;  // 성공 메시지
        }
        else {
            cout << "Room number input error." << endl;  // 오류 메시지
        }
    }

    chosun.showHouse();  // 최종 집 정보 출력

    return 0;  // 메인 함수가 성공적으로 종료될 때 반환하는 값
} */

//4번 문제

//**************************************************
// 아래 코드는 x,y 좌표 값을 저장하는 큐(Queue)클래스를 구현하고
// 이 큐를 관리하는 프로그램이다.
// 아래 세부 문제들을 참고하여 나머지 코드를 구현하라.
//**************************************************

/*
#include <iostream>
#include <string>
using namespace std;

// x,y 좌표 값을 저장하는 클래스
class Point {
public:
    int x, y;
    void print() { cout << "(" << x << "," << y << ")"; }
};

// Point 객체들을 저장하는 원형 큐
class Queue {
private:
    string* pname;    // 큐의 이름
    Point* elements; // 큐의 원소들을 저장하고 있는 배열의 메모리 주소
    int capacity;     // 동적으로 할당된 큐의 크기 (최대 원소 개수)
    int count;        // 현재 큐에 삽입된 원소의 개수
    int frontIdx;     // 큐의 맨 앞 원소의 인덱스(pop()할 원소)
    int backIdx;      // 큐의 맨 뒤 원소 그 다음의 인덱스(새로 push()할 인덱스)
public:
    Queue(const string& name, int capacity) { // 생성자
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
// 여기에 Queue의 적절한 멤버 함수들을 구현하라.
//-------------------------------------------------

// 큐의 맨 뒤에 item을 삽입함
bool Queue::push(const Point& item) {
    if (count >= capacity) // 큐가 가득 찬 경우
        return false;
    // 문제 1: 여기에 아래의 코드를 삽입하시오.
    // item을 elements[backIdx]에 저장한 후
    // 원형 큐이므로 backIdx = (backIdx+1) % capacity; 한 후 
    // count 증가
    return true;
}

//-------------------------------------------------
// 아래 함수들은 문제에서 제시한 코드로 대체하시오.
//-------------------------------------------------

// 큐의 첫 원소와 마지막 원소의 위치를 서로 바꾼다.
void swap(Queue& queue) {
}
// 큐의 일부 원소들을 출력한 후 삭제한다.
void pop(Queue& queue) {
}
// 아래 함수의 매개변수는 call by value 이다. 
void printQueue(Queue q) { // 함수 수정 금지
    q.setName("q    ");
    q.print();             // q의 좌표들을 출력;
}
// 위 함수를 call by value 로 호출한다. 
void parameter(Queue& queue) { // 함수 수정 금지
    printQueue(queue);
    queue.print();
}
// 키보드에서 좌표 값들을 읽어 큐에 삽입함
void input(Queue& queue) {
    int count;
    // 큐에 삽입할 좌표의 개수
    cout << "input count? ";
    cin >> count;
    int space = queue.maxSize() - queue.size(); // 큐의 여유 공간
    // count 값이 큐의 여유 공간보다 더 클 경우 여유공간 크기만큼 설정함
    if (count > space) count = space;
    for (int i = 0; i < count; i++) {
        Point p;
        cout << "input " << "x, y: ";
        cin >> p.x >> p.y; // x, y 좌표 값을 입력 받음
        queue.push(p);
    }
    queue.print();
}

//-------------------------------------------------
// 아래 코드는 수정 불가
//-------------------------------------------------

int main() {
    Point points[] = { {0,1}, {2,3}, {4,5}, {6,7}, {8,9} };
    int capacity = sizeof(points) / sizeof(points[0]);

    Queue queue("queue", capacity);
    // points[] 배열에 있는 좌표들을 큐에 삽입함
    for (int i = 0; i < queue.maxSize(); i++)
        queue.push(points[i]);
    queue.print(); // 큐의 모든 원소를 출력함

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
// 소스 코드 끝
//**************************************************

/*
============================================================================== =
== 위 프로그램의 실행 결과는 아래와 같다.
============================================================================== =
queue:                                                   // queue가 비어 있음

menu: 0.exit 1.swap 2.pop 3.parameter 4.input >> 0[엔터] // 0을 입력한 후 엔터를 치시오.

Good bye!!

*/

/*
============================================================================== =
== 문제 1
============================================================================== =
// 프로그램 시작하자마자 아래 실행결과처럼 queue의 내용이 출력되도록  
// Queue::push(const Point& item) 멤버함수를 구현하시오.
// 구현시 함수 내의 주석을 참고하라.
============================================================================== =
== 실행결과 1
============================================================================== =
queue: (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)       // queue에 삽입된 원소들 출력

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >>

*/

/*
============================================================================== =
== 문제 2
============================================================================== =
// 기존 swap(Queue& queue) 함수를 아래 코드로 대체하라.
// 아래 함수는 queue의 처음과 마지막 원소의 위치를 서로 바꾸는 함수이다.
// 이를 위한 Queue::front()와 Queue::back() 함수를 구현하라.
//-----------------------------------------------------------------------------
void swap(Queue & queue) {
    queue.print();
    // queue.front()와 queue.back()의 좌표 값들의 위치를 서로 바꿈
    Point tmp = queue.front();
    queue.front() = queue.back();
    queue.back() = tmp;
    cout << "swap(queue.front(), queue.back())" << endl;
    queue.print();
}
//-----------------------------------------------------------------------------
// Queue::front()는 큐의 맨 앞 원소의 참조를 반환한다. 리턴 타입을 적절히 선언하라.
// 구현은 다음과 같이 하라. 
//-----------------------------------------------------------------------------
elements[frontIdx]의 참조를 return한다.

//-----------------------------------------------------------------------------
// Queue::back()은 큐의 맨 뒤 원소의 참조를 반환한다. 리턴 타입을 적절히 선언하라.
// 구현은 다음과 같이 하라. 
//-----------------------------------------------------------------------------
int idx = backIdx - 1;
if (idx < 0) idx = capacity - 1; // 원형 큐이므로
elements[idx]의 참조를 return한다.

============================================================================== =
== 실행결과 2
============================================================================== =
queue: (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 1
queue : (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)
swap(queue.front(), queue.back())
queue : (8, 9)(2, 3)(4, 5)(6, 7)(0, 1)       // 큐의 처음과 마지막 원소의 위치가 바뀌었음

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 1
queue : (8, 9)(2, 3)(4, 5)(6, 7)(0, 1)
swap(queue.front(), queue.back())
queue : (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)       // 큐의 처음과 마지막 원소의 위치가 바뀌었음

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >>

*/

/*
============================================================================== =
== 문제 3
============================================================================== =
// 기존 pop(Queue& queue) 함수를 아래 코드로 대체하라.
// 아래 함수는 queue의 내의 절반 정도의 원소들을 출력하고 해당 원소들을 삭제하는 함수이다.
// 이를 위한 Queue::pop() 멤버함수를 구현하라.
// 구현시 Queue 클래스 내의 이 멤버함수 선언 부분의 주석을 참고하라.
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
// Queue::pop()은 큐의 맨 앞 원소(frontIdx) 삭제한다. 리턴 값은 없다.
// 구현은 다음과 같이 하라. 
//-----------------------------------------------------------------------------
큐가 비었으면 그냥 리턴한다;
원형 큐이므로 frontIdx = (frontIdx + 1) % capacity;
count 감소;

============================================================================== =
== 실행결과 3
============================================================================== =
queue: (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 2
half pop : (0, 1)(2, 3)          // 큐에서 빼낸 원소들 출력
queue : (4, 5)(6, 7)(8, 9)        // 큐에 남아 있는 원소들 출력; 전체 원소의 반정도 삭제되었음

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >>

*/

/*
============================================================================== =
== 문제 4
============================================================================== =
// 3번 메뉴를 실행하면 프로그램이 비정상적으로 종료할 것이다. 
// 이 문제를 해결하기 위해 Queue 클래스 내에 적절한 생성자 또는 복사생성자 또는 멤버함수를 구현하라.
// 정상적으로 구현되었을 경우 아래와 같이 출력될 것이다.
============================================================================== =
== 실행결과 4
============================================================================== =
queue: (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 3
q : (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)
queue : (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)  // 프로그램 죽지않고 정상 실행되었음; 두 큐의 내용 동일해야 함

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >>

*/

/*
============================================================================== =
== 문제 5
============================================================================== =
// 위 문제들을 모두 구현하였으면 아래처럼 입력하여 정상적으로 실행되어야 한다.  
============================================================================== =
== 실행결과 5
============================================================================== =
queue: (0, 1)(2, 3)(4, 5)(6, 7)(8, 9)

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 2
half pop : (0, 1)(2, 3)
queue : (4, 5)(6, 7)(8, 9)                 // 전체 원소의 반정도 삭제

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 2
half pop : (4, 5)
queue : (6, 7)(8, 9)                      // 전체 원소의 반정도 삭제

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 2
half pop : (6, 7)
queue : (8, 9)                           // 전체 원소의 반정도 삭제

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 4
input count ? 3
input x, y : 10 20
input x, y : 30 40
input x, y : 50 60
queue : (8, 9)(10, 20)(30, 40)(50, 60)     // 삭제된 원소만큼 새로 삽입


menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 1
queue : (8, 9)(10, 20)(30, 40)(50, 60)
swap(queue.front(), queue.back())
queue : (50, 60)(10, 20)(30, 40)(8, 9)     // 큐의 처음과 마지막 원소의 위치가 바뀌었음

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 3
q : (50, 60)(10, 20)(30, 40)(8, 9)
queue : (50, 60)(10, 20)(30, 40)(8, 9)     // 프로그램 죽지않고 정상 실행되었음

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 2
half pop : (50, 60)(10, 20)
queue : (30, 40)(8, 9)                   // 전체 원소의 반정도 삭제

menu : 0.exit 1.swap 2.pop 3.parameter 4.input >> 0

Good bye!!
*/

//문제 5

/*
이 문제는 플레이어와 몬스터 간의 전투를 시뮬레이션하는 프로그램을 작성하는 것이다.
플레이어와 몬스터는 각각 이름(string), 체력(int), 무기(int)를 가지고 있다.
플레이어와 몬스터, 플레이어와 플레이어는 서로 공격을 가할 수 있으며,
공격은 상대방의 체력을 감소시킨다.
아래 입 / 출력에 맞게 Player, Monster 클래스와 전역함수 Attack를 구현하시오.

* 제약사항
- Player와 Monster 클래스의 멤버변수는 private(public으로 선언 불가)
- main 함수 수정 불가.
- Player의 생성자는 이름, 체력, 무기를 차례대로 입력받는다.
무기를 별도로 입력받지않아도 기본으로 10의 값을 갖는다.
- Monster의 생성자는 이름, 체력, 무기를 차례대로 입력받는다.
체력, 무기는 별도로 입력받지않아도 기본으로 체력 100, 무기 1의 값을 갖는다.
- 전역함수 Attack는 함수 이름이 같으나 3가지 경우 다르게 연산을 수행한다.
(함수명 변경 불가)
- 플레이어가 몬스터를 공격
- 몬스터가 플레이어를 공격
- 플레이어가 플레이어를 공격
- 공격을 당한 객체의 체력은 공격을 한 객체의 무기에서 공격당한 객체의 체력을 뺀 값이다.
(필요하다면 절댓값함수 사용 : abs())
ex) 플레이어 A가 몬스터 B를 공격
몬스터 B의 체력 = 플레이어 A의 무기 - 몬스터 B 체력
- 공격의 각 case가 끝난 후 전투를 수행한 플레이어와 몬스터 정보를 출력한다.
*/


/*=======================예제====================*/
/*
예제 - 1
(입력)
1

(출력)
손오공(이)가 몬스터 A을 공격했다!
---- - 플레이어 정보---- -
플레이어 이름 : 손오공
체력 : 100
무기 : 5
---- - 몬스터 정보---- -
몬스터 이름 : 몬스터 A
체력 : 95
무기 : 1

예제 - 2
(입력)
2

(출력)
몬스터 B(이)가 홍길동을 공격했다!
---- - 플레이어 정보---- -
플레이어 이름 : 홍길동
체력 : 99
무기 : 10
---- - 몬스터 정보---- -
몬스터 이름 : 몬스터 B
체력 : 200
무기 : 1

예제 - 3
(입력)
3

(출력)
홍길동(이)가 손오공을 공격했다!
---- - 플레이어 정보---- -
플레이어 이름 : 홍길동
체력 : 100
무기 : 10
---- - 플레이어 정보---- -
플레이어 이름 : 손오공
체력 : 90
무기 : 5

*/

/*=======================소=스=코=드====================*/

/*
class Player {
private:
    //멤버 변수
public:
    //멤버 함수
};

void Player::getInfo() {
    cout << "-----플레이어 정보-----" << endl;
    cout << "플레이어 이름 : " << << endl;
    cout << "체력 : " << << endl;
    cout << "무기 : " <<  << endl;
}


class Monster {
private:
    //멤버 변수
public:
    //멤버 함수
};
void Monster::getInfo() {
    cout << "-----몬스터 정보-----" << endl;
    cout << "몬스터 이름 : " <<  << endl;
    cout << "체력 : " <<  << endl;
    cout << "무기 : " <<  << endl;
}

void Attack() {
    cout << << "(이)가 " <<  << "을 공격했다!" << endl;
}
void Attack() {
    cout << << "(이)가 " <<  << "을 공격했다!" << endl;
}
void Attack() {
    cout << << "(이)가 " <<  << "을 공격했다!" << endl;
}

int main() {

    Player player_1("홍길동", 100);
    Player player_2("손오공", 100, 5);
    Monster monster_A("몬스터 A"), monster_B("몬스터 B", 200);

    int i;
    cin >> i;
    switch (i)
    {
    case 1: //플레이어가 몬스터 공격
        Attack(player_2, monster_A);
        player_2.getInfo();
        monster_A.getInfo();
        break;
    case 2: //몬스터가 플레이어 공격
        Attack(monster_B, player_1);
        player_1.getInfo();
        monster_B.getInfo();
        break;
    case 3: //플레이어가 플레이어 공격
        Attack(player_1, player_2);
        player_1.getInfo();
        player_2.getInfo();
        break;
    }
    return 0;
}

*/

// 문제5 정답

/*
#include <iostream>
using namespace std;

class Player {
private:
    //멤버 변수
    string p_name;
    int p_health;
    int p_weapon;
public:
    //멤버 함수
    void getInfo() {
        cout << "-----플레이어 정보-----" << endl;
        cout << "플레이어 이름 : " << p_name << endl;
        cout << "체력 : " << p_health << endl;
        cout << "무기 : " << p_weapon << endl;
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
    //멤버 변수
    string m_name;
    int m_health;
    int m_weapon;
public:
    //멤버 함수
    void getInfo() {
        cout << "-----몬스터 정보-----" << endl;
        cout << "몬스터 이름 : " << m_name << endl;
        cout << "체력 : " << m_health << endl;
        cout << "무기 : " << m_weapon << endl;
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
    cout << a.getname() << "(이)가 " << b.getname() << "을 공격했다!" << endl;
    result = b.gethealth() - a.getweapon();
    b.setresult(result);
    return result;
}
int Attack(Monster& a, Player& b) {
    int result = 0;
    cout << a.getname() << "(이)가 " << b.getname() << "을 공격했다!" << endl;
    result = b.gethealth() - a.getweapon();
    b.setresult(result);
    return result;
}
int Attack(Player& a, Player& b) {
    int result = 0;
    cout << a.getname() << "(이)가 " << b.getname() << "을 공격했다!" << endl;
    result = b.gethealth() - a.getweapon();
    b.setresult(result);
    return result;
}

int main() {

    Player player_1("홍길동", 100);
    Player player_2("손오공", 100, 5);
    Monster monster_A("몬스터 A"), monster_B("몬스터 B", 200);

    int i;
    cin >> i;
    switch (i)
    {
    case 1: //플레이어가 몬스터 공격
        Attack(player_2, monster_A);
        player_2.getInfo();
        monster_A.getInfo();
        break;
    case 2: //몬스터가 플레이어 공격
        Attack(monster_B, player_1);
        player_1.getInfo();
        monster_B.getInfo();
        break;
    case 3: //플레이어가 플레이어 공격
        Attack(player_1, player_2);
        player_1.getInfo();
        player_2.getInfo();
        break;
    }
    return 0;
}

*/

//문제 6

/*
곧 여름이다...
이 문제는 가족들이 1일 1식을하며 가족들의 하루 섭취량을 계산하는 프로그램을 작성하는 것이다.
가족 하루 섭취량 계산 클래스인 'CalFood'는 여러 가족구성원이 함께 사용하기 때문에 전체 하나만 있어야한다.
따라서 CalFood의 멤버변수와 멤버함수는 static으로 작성해야한다.
아래 입 / 출력과 제약사항에 맞는 CalFood 클래스와 Person 클래스를 작성하시오.

* 제약사항
- CalFood의 멤버변수는 public, Person 클래스의 멤버변수는 private(public으로 선언 불가)
- main 함수 수정 불가.
- CalFood의 멤버변수와 멤버함수는 static으로 작성.
- Person 클래스의 음식을 나타내는 멤버변수 Infofood는 1개
- CalFood의 음식을 나타내는 구조체는  멤버변수 Infofood100개

*/

/*=======================예제====================*/

/*
예제 - 1
(입력)
피자 1000
통닭 2000
아메리카노 0

(출력)
* ************누적된 칼로리 * ************
지금 까지 먹은 음식 : 피자 통닭 아메리카노
총 칼로리 : 3000 kcal

예제 - 2
(입력)
공기밥 300
된장국 200
김치찌개 600

(출력)
* ************누적된 칼로리 * ************
지금 까지 먹은 음식 : 공기밥 된장국 김치찌개
총 칼로리 : 1100 kcal

*/

/*=======================소스코드====================*/
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
    cout << "************* 누적된 칼로리 *************\n";
    cout << "지금 까지 먹은 음식 : ";
    while (i < cnt) {
        cout << food[i].food << " ";
        i++;
    }
    cout << endl;
    cout << "총 칼로리: " << totalCalories << " kcal" << endl;
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
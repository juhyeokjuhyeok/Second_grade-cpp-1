#include <iostream>
#include <string>
using namespace std;

/* 문제 1
두 사람이 하는 가위, 바위, 보 게임을 만들어보자.
두 사람의 이름은 '로미오'와 '줄리엣'으로한다.
로미오와 줄리엣의 가위, 바위, 보를 차례대로 입력받는다.
그 후 누가 이겼는지 판단하여 승자를 출력한다.
비기게 되면 "비겼습니다"라고 출력하고 프로그램을 종료한다.
 만약 입력이 잘못되었으면  "로미오의 입력이 틀렸습니다." 혹은
 "줄리엣의 입력이 틀렸습니다."를 출력한다

*strcmp는 cstring 헤더파일을 포함해야한다.

#include
using namespace std;

int main() {
	// 입력 받기
	char s[10];
	char t[10];
	cin >> s >> t;

	// 틀린 입력 골라내기
		// 승자 결정
}


입력-1
가위 바위
출력-1
줄리엣이 이겼습니다.

입력-2
adsf 바위
출력-2
로미오의 입력이 틀렸습니다.

입력-3
보 sfd
출력-3
줄리엣의 입력이 틀렸습니다.

*/

/* 정답

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // 입력 받기
    char s[10];
    char t[10];
    cin >> s >> t;

    // 틀린 입력 골라내기
    if (strcmp(s, "바위") != 0 && strcmp(s, "가위") != 0 && strcmp(s, "보") != 0) {
        cout << "로미오의 입력이 틀렸습니다.";
        return 0; // 올바르지 않은 입력이므로 프로그램 종료
    }
    if (strcmp(t, "바위") != 0 && strcmp(t, "가위") != 0 && strcmp(t, "보") != 0) {
        cout << "줄리엣의 입력이 틀렸습니다.";
        return 0; // 올바르지 않은 입력이므로 프로그램 종료
    }

    // 줄리엣과 로미오가 무엇을 선택했는지 검사
    if (strcmp(s, "바위") == 0 && strcmp(t, "보") == 0) {
        cout << "줄리엣이 이겼습니다.";
    }
    else if (strcmp(s, "가위") == 0 && strcmp(t, "바위") == 0) {
        cout << "줄리엣이 이겼습니다.";
    }
    else if (strcmp(s, "보") == 0 && strcmp(t, "가위") == 0) {
        cout << "줄리엣이 이겼습니다.";
    }
    else if (strcmp(t, "바위") == 0 && strcmp(s, "보") == 0) {
        cout << "로미오가 이겼습니다.";
    }
    else if (strcmp(t, "가위") == 0 && strcmp(s, "바위") == 0) {
        cout << "로미오가 이겼습니다.";
    }
    else if (strcmp(t, "보") == 0 && strcmp(s, "가위") == 0) {
        cout << "로미오가 이겼습니다.";
    }
    else {
        cout << "비겼습니다.";
    }

    return 0;
}

*/

/* 문제 2

교제 p 88, 실습문제 1번

cout, << 연산자를 이용하여 1부터 100까지 정수를 다음과 같이 한 줄에 10개씩
출력하라. 각 정수는 탭으로 분리하여 출력하라.
탭 : \t


출력-1
1       2       3       4       5       6       7       8       9       10
11      12      13      14      15      16      17      18      19      20
21      22      23      24      25      26      27      28      29      30
31      32      33      34      35      36      37      38      39      40
41      42      43      44      45      46      47      48      49      50
51      52      53      54      55      56      57      58      59      60
61      62      63      64      65      66      67      68      69      70
71      72      73      74      75      76      77      78      79      80
81      82      83      84      85      86      87      88      89      90
91      92      93      94      95      96      97      98      99      100

*/

/* 정답 

#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main(void) {
	for (int i = 1; i <= 10; i++) {
		std::cout << i << '\t';
	}
	cout << '\n';

	for (int i = 11; i <= 20; i++) {
		std::cout << i << '\t';
	}
	cout << '\n';

	for (int i = 21; i <= 30; i++) {
		std::cout << i << '\t';
	}
	cout << '\n';

	for (int i = 31; i <= 40; i++) {
		std::cout << i << '\t';
	}
	cout << '\n';

	for (int i = 41; i <= 50; i++) {
		std::cout << i << '\t';
	}
	cout << '\n';

	for (int i = 51; i <= 60; i++) {
		std::cout << i << '\t';
	}
	cout << '\n';

	for (int i = 61; i <= 70; i++) {
		std::cout << i << '\t';
	}
	cout << '\n';

	for (int i = 71; i <= 80; i++) {
		std::cout << i << '\t';
	}
	cout << '\n';

	for (int i = 81; i <= 90; i++) {
		std::cout << i << '\t';
	}
	cout << '\n';

	for (int i = 91; i <= 100; i++) {
		std::cout << i << '\t';
	}
	cout << '\n';

	return 0;
}

*/

/* 문제 3

교제 p 89, 실습문제 2번

구구단을 출력하는 프로그램을 작성하라.
각 구구단 사이는 탭으로 분리한다.

출력-1
1x1=1   2x1=2   3x1=3   4x1=4   5x1=5   6x1=6   7x1=7   8x1=8   9x1=9
1x2=2   2x2=4   3x2=6   4x2=8   5x2=10  6x2=12  7x2=14  8x2=16  9x2=18
1x3=3   2x3=6   3x3=9   4x3=12  5x3=15  6x3=18  7x3=21  8x3=24  9x3=27
1x4=4   2x4=8   3x4=12  4x4=16  5x4=20  6x4=24  7x4=28  8x4=32  9x4=36
1x5=5   2x5=10  3x5=15  4x5=20  5x5=25  6x5=30  7x5=35  8x5=40  9x5=45
1x6=6   2x6=12  3x6=18  4x6=24  5x6=30  6x6=36  7x6=42  8x6=48  9x6=54
1x7=7   2x7=14  3x7=21  4x7=28  5x7=35  6x7=42  7x7=49  8x7=56  9x7=63
1x8=8   2x8=16  3x8=24  4x8=32  5x8=40  6x8=48  7x8=56  8x8=64  9x8=72
1x9=9   2x9=18  3x9=27  4x9=36  5x9=45  6x9=54  7x9=63  8x9=72  9x9=81

*/

/* 정답

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	for (int i = 1; i <= 9; i++) {
		cout << i << "x" << 1 << "=" << i * 1 << '\t';
	}
	cout << '\n';

	for (int i = 1; i <= 9; i++) {
		cout << i << "x" << 2 << "=" << i * 2 << '\t';
	}
	cout << '\n';

	for (int i = 1; i <= 9; i++) {
		cout << i << "x" << 3 << "=" << i * 3 << '\t';
	}
	cout << '\n';

	for (int i = 1; i <= 9; i++) {
		cout << i << "x" << 4 << "=" << i * 4 << '\t';
	}
	cout << '\n';

	for (int i = 1; i <= 9; i++) {
		cout << i << "x" << 5 << "=" << i * 5 << '\t';
	}
	cout << '\n';

	for (int i = 1; i <= 9; i++) {
		cout << i << "x" << 6 << "=" << i * 6 << '\t';
	}
	cout << '\n';

	for (int i = 1; i <= 9; i++) {
		cout << i << "x" << 7 << "=" << i * 7 << '\t';
	}
	cout << '\n';

	for (int i = 1; i <= 9; i++) {
		cout << i << "x" << 8 << "=" << i * 8 << '\t';
	}
	cout << '\n';

	for (int i = 1; i <= 9; i++) {
		cout << i << "x" << 9 << "=" << i * 9 << '\t';
	}
	cout << '\n';

	return 0;
}

*/

/* 문제 4

교제 p 91, 실습문제 11번과 유사함.

끝 수를 입력하면 1부터 끝수까지의 합을 구하는 프로그램을 작성하시오.

입력-1
5
출력-1
1에서 5까지의 합은 15입니다.

입력-2
10
출력-2
1에서 10까지의 합은 55입니다.

입력-3
20
출력-3
1에서 20까지의 합은 210입니다.

입력-4
50
출력-4
1에서 50까지의 합은 1275입니다.

*/

/* 정답 

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int a;
	int sum = 0;
	cin >> a;

	for (int i = 1; i <= a; i++) {
			sum += i;
	}
	cout << "1에서 " << a << "까지의 합은 " << sum << "입니다.";

	return 0;
}

*/

/* 문제 5

교제 p93 , 실습문제 14번과 유사

커피종류와 가격은 아래와 같다.
에스프레소 : 2000원
아메리카노 : 2300원
카푸치노 : 2500원

하루에 20,000원 이상벌게되면 카페를 닫는다.
카페 매출에 따라 자동으로 문을닫는 프로그램을 작성하시오.
입력은 커피종류 잔의수 순서대로 입력받으며
모든 종류의 커피 종류, 잔의수를 입력받는다.

예외처리 - 잔의 총합이 0보다 작을경우
"주문을 하지 않았습니다."를 출력한다.

int main() {

	// 사용자에게 주문한 가격 출력
	if (order > 0) { // 정상적인 주문의 경우
		cout << order << "원입니다. 맛있게 드세요" << endl;
	}
	else {
		cout << "주문을 하지 않았습니다." << endl;
		return 0;
	}

	// 20000원이상 벌었는지 판단

	if (totalSale > 20000) {
		cout << "오늘 " << totalSale << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
	}
	return 0;
}


입력-1
에스프레소 0 아메리카노 0 카푸치노 2
출력-1
5000원입니다. 맛있게 드세요

입력-2
아메리카노 5 카푸치노 0 에스프레소 7
출력-2
25500원입니다. 맛있게 드세요
오늘 25500원을 판매하여 카페를 닫습니다. 내일 봐요~~~

입력-3
아메리카노 5 에스프레소 5 카푸치노 7
출력-3
39000원입니다. 맛있게 드세요
오늘 39000원을 판매하여 카페를 닫습니다. 내일 봐요~~~

입력-4
아메리카노 0 에스프레스 0 카푸치노 0
출력-4
주문을 하지 않았습니다.

*/

/* 정답 

#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int order;

	char coffee1[100];
	int num = 0;
	cin >> coffee1 >>  num;

	char coffee2[100];
	int num2 = 0;
	cin >> coffee2 >> num2;

	char coffee3[100];
	int num3 = 0;
	cin >> coffee3 >> num3;

	if (strcmp(coffee1, "에스프레소") == 0) {
		num = num * 2000;
	}
	else if (strcmp(coffee2, "에스프레소") == 0) {
		num2 = num2 * 2000;
	}
	else {
		num3 = num3 * 2000;
	}

	if (strcmp(coffee1, "아메리카노") == 0) {
		num = num * 2300;
	}
	else if (strcmp(coffee2, "아메리카노") == 0) {
		num2 = num2 * 2300;
	}
	else {
		num3 = num3 * 2300;
	}

	if (strcmp(coffee1, "카푸치노") == 0) {
		num = num * 2500;
	}
	else if (strcmp(coffee2, "카푸치노") == 0) {
		num2 = num2 * 2500;
	}
	else {
		num3 = num3 * 2500;
	}

	order = num + num2 + num3;

	if (order > 0) { // 정상적인 주문의 경우
		cout << order << "원입니다. 맛있게 드세요" << endl;
	}
	else {
		cout << "주문을 하지 않았습니다." << endl;
		return 0;
	}

	if (order > 20000) {
		cout << "오늘 " << order << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
	}

	return 0;
}

*/

/*문제 6

교제 p 93, 실습문제 15번

덧셈(+), 뺄셈(-), 곱셈(*), 나눗셈(/), 나머지(%)의
정수 5칙연산을 할 수 있는 프로그램을 작성하시오.

입력-1
10 / 2
출력-1
10 / 2 = 5

입력-2
20 % 3
출력-2
20 % 3 = 2

입력-3
50 - 5
출력-3
50 - 5 = 45

입력-4
10 * 10
출력-4
10 * 10 = 100

*/

/* 정답

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	int a = 0;
	int b = 0;
	int num = 0;
	char c;
	cin >> a >> c >> b;

	switch (c) {
	case '+':
		num = a + b;
		break;
	case '-':
		num = a - b;
		break;
	case '*':
		num = a * b;
		break;
	case '/':
		num = a / b;
		break;
	case '%':
		num = a % b;
		break;
	}
	cout << a << " " << c << " " << b << " " << "= " << num << endl;


	return 0;
}

*/
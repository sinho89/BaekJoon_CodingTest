#include <iostream>
#include <cmath>

using namespace std;

// 입출력과 사칙연산 ( 백준 1단계 )
#pragma region BaekJoon_Level1
// 2557번 문제 ( Hello World! 출력하기 )
void HelloWorld()
{
	[](string str) // 람다식 사용연습 겸 Hello World 출력
	{
		cout << str << endl;
	}("HelloWorld!");
}
// 10718번 문제 ( 연속된 문자열 2번 출력하기)
void WeLoveKriii()
{
	for (int i = 0; i < 2; i++)
		cout << "강한친구 대한육군" << endl;
}
// 10171번 문제 (고양이 그리기)
void Cat()
{
	cout << "\\    /\\" << endl;
	cout << " )  ( ')" << endl;
	cout << "(  /  )" << endl;
	cout << "\\ (__)|" << endl;
}
// 10172번 문제 (강아지 그리기)
void Dog()
{
	cout << "|\\_/|" << endl;
	cout << "|q p|   /}" << endl;
	cout << "( 0 )\"\"\"\\" << endl;
	cout << "|\"^\"`    |" << endl;
	cout << "||_/=\\\\__|" << endl;
}
// 1000번 문제 (+)
void Sum()
{
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
}
// 1001번 문제 (-)
void Sub()
{
	int a, b;
	cin >> a >> b;
	cout << a - b << endl;

}
// 10998번 문제 (*)
void Mul()
{
	int a, b;
	cin >> a >> b;
	cout << a * b << endl;
}
// 1008번 문제 (/)
void Div()
{
	double a, b;
	cin >> a >> b;

	cout.precision(12); // 실수 전체 자리수 중 n자리 까지 표현
	cout << fixed; // 고정 소수점 표기로 전환
	cout << a / b << endl;
}
// 10869번 문제 (사칙연산)
void ArithmeticOperation()
{
	int a, b;
	cin >> a >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
}
// 10926번 문제 ( 문자열 합치기 )
void Surprised()
{
	string str;

	cin >> str;
	cout << str + "??!";
}
// 18108번 문제 ( 불기연도 -> 서기연도 )
void YearChanger()
{
	int a;
	cin >> a;
	cout << a - 543;
}
// 10430번 문제 ( 나머지 연산 출력하기 )
void Remain()
{
	int a, b, c;
	cin >> a >> b >> c;

	cout << (a + b) % c << endl;
	cout << ((a % c) + (b % c)) % c << endl;
	cout << (a * b) % c << endl;
	cout << ((a % c) * (b % c)) % c << endl;
}
// 2588번 문제 ( 세 자리 수 곱셈 순서 연산 문제) : 세 자리수 -> 모든 자리수로 풀어보기
void MulOrder()
{
	int a, b;
	int powCount = 1;
	int remainData = 0;
	int divData = 0;
	cin >> a >> b;

	while (true)
	{
		remainData = (int)pow(10, powCount);
		divData = (int)pow(10, powCount - 1);

		if (b == (b % divData))
			break;

		cout << (a * ((b % remainData) / divData)) << endl;

		powCount++;
	}

	cout << a * b << endl;
}
#pragma endregion
// if문 (백준 2단계)
#pragma region BaekJoon_Level2

// 1330번 문제 ( 두 수 비교하기 )
void Compare()
{
	int a, b;
	cin >> a >> b;

	if (a > b)
		cout << ">" << endl;
	if (a < b)
		cout << "<" << endl;
	if (a == b)
		cout << "==" << endl;
}
// 9498번 문제 ( 성적 분류 )
void Grade()
{
	int a;
	cin >> a;

	if (a >= 90)
		cout << "A";
	else if (a >= 80)
		cout << "B";
	else if (a >= 70)
		cout << "C";
	else if (a >= 60)
		cout << "D";
	else
		cout << "F";

}
// 2753번 문제 (윤달)
void LeapMonth()
{
	int a;
	cin >> a;

	cout << ((a % 4 == 0) & ((a % 100 != 0) | (a % 400 == 0))) << endl;
}
#pragma endregion

int main()
{


	return 0;
}


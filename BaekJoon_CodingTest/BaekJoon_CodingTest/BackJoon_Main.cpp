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
// 14681번 문제 (사분면)
void Quadrant()
{
	int a, b;
	cin >> a >> b;

	if ((a > 0) & (b > 0))
		cout << 1 << endl;
	else if ((a < 0) & (b > 0))
		cout << 2 << endl;
	else if ((a < 0) & (b < 0))
		cout << 3 << endl;
	else if ((a > 0) & (b < 0))
		cout << 4 << endl;

}
// 2884번 문제 (알람 시계)
void AlamClock()
{
	int a, b;
	cin >> a >> b;

	if ((a < 0) | (a > 23))
		return;
	if ((a < 0) | (a > 59))
		return;


	if ((a == 0) & (b < 45))
		a = 24;

	if (b == 0)
	{
		a--;
		b = 60;
	}

	if (b < 45)
	{
		a--;
		b = 60 + (b - 45);
	}
	else
		b = b - 45;

	cout << a << " " << b << endl;

}
// 2525번 문제 (오븐 타이머)
void Timer()
{
	int a, b, c, d, e;
	cin >> a >> b;
	cin >> c;

	d = b + c;
	e = d / 60;

	a += e;

	if (d < 60)
		b = d;
	else
		b = d - (60 * e);

	if (a > 23)
		a -= 24;
	if (b > 60)
		b -= 60;

	cout << a << " " << b << endl;
	
}
// 2480번 문제 (주사위 3개)
void DiceGame()
{
	int a, b, c, d;
	cin >> a >> b >> c;

	if ((a == b) && (b == c) && (c == a))
		cout << 10000 + (a * 1000) << endl;
	else
	{
		if ((a == b) || (a == c))
			cout << 1000 + (a * 100) << endl;
		else if ((a == b) || (b == c))
			cout << 1000 + (b * 100) << endl;
		else if ((c == a) || (c == b))
			cout << 1000 + (c * 100) << endl;
	}

	if ((a != b) && (b != c) && (c != a))
	{
		if (a > b)
			d = a;
		else
			d = b;
		if (c > d)
			d = c;

		cout << d * 100 << endl;
	}
}
#pragma endregion

int main()
{
	return 0;
}


#include "Defines.h"

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
// for문 (백준 3단계)
#pragma region BaekJoon_Level3
// 2739번 문제 (구구단)
void MultiTable()
{
	int a;
	cin >> a;

	for (int i = 1; i < 10; i++)
		cout << a << " * " << i << " = " << a * i << endl;
}
// 10950번 문제 (원하는 수만큼 반복하면 결과내기)
void RepeatSum()
{
	vector<int> vecResult;
	int a, b, c;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		vecResult.push_back(b + c);
	}

	for (unsigned i = 0; i < vecResult.size(); i++)
		cout << vecResult[i] << endl;
}
// 8393번 문제 (누적합)
void AccumSum()
{
	int a, b;
	cin >> a;
	b = 0;

	for (int i = 1; i < a + 1; i++)
		b += i;

	cout << b << endl;
}
// 15552번 문제 (빠른 A+B)
void FastSum()
{
	int a, b, c;
	vector<int> vecResult;

	cin.tie(NULL);
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		vecResult.push_back(b + c);
	}

	for (unsigned int i = 0; i < vecResult.size(); i++)
		cout << vecResult[i] << "\n";

}
// 2741번 문제 (전체 출력)
void FullOutput()
{
	int a;
	cin.tie(NULL);
	cin >> a;

	for (int i = 1; i < a + 1; i++)
		cout << i << "\n";
}
// 2742번 문제 (역순 출력)
void ReverseOutPut()
{
	int a;
	cin.tie(NULL);
	cin >> a;

	for (int i = a; i > 0; i--)
		cout << i << "\n";
}
// 11021번 문제 (다중 데이터 연산 출력1)
void DatasSum()
{
	vector<int> vecResult;
	int a, b, c;
	cin.tie(NULL);
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		vecResult.push_back(b + c);
	}

	for (unsigned int i = 0; i < vecResult.size(); i++)
		cout << "Case #" << i + 1 << ": " << vecResult[i] << "\n";
}
// 11022번 문제 (데이터 연산 출력 심화)
void DatasSumPlus()
{
	vector<string> vecResult;
	int a, b, c;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		string str = to_string(b) + " + " + to_string(c) + " = " + to_string(b + c);
		vecResult.push_back(str);
	}

	for (unsigned int i = 0; i < vecResult.size(); i++)
		cout << "Case #" << i + 1 << ": " << vecResult[i] << "\n";
}
// 2438번 문제 (별 찍기)
void DrawStars()
{
	int a;
	cin.tie(NULL);
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < i + 1; j++)
			cout << "*";

		cout << "\n";
	}
}
// 2439번 문제 (별 찍기2)
void DrawStars2()
{
	int a;
	cin.tie(NULL);
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (i > (a - j) - 2)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
}
// 10871번 문제 (작은수 찾기)
void MinValueFinder()
{
	vector<int> vecResult;
	int a, b;
	cin.tie(NULL);
	cin >> a >> b;

	for (int i = 0; i < a; i++)
	{
		int c;
		cin >> c;
		vecResult.push_back(c);
	}

	for (unsigned int i = 0; i < vecResult.size(); i++)
	{
		if (vecResult[i] < b)
			cout << vecResult[i] << " ";
	}
}

#pragma endregion
// while문 (백준 4단계)
#pragma region BaekJoon_Level4
// 10952번 문제 (A+B)
void WhileSum()
{
	vector<int> vecResult;

	int a, b;
	cin.tie(NULL);

	while (true)
	{
		cin >> a >> b;

		if ((a == 0) & (b == 0))
			break;

		vecResult.push_back(a + b);
	}

	for (unsigned int i = 0; i < vecResult.size(); i++)
		cout << vecResult[i] << "\n";
}
// 10951번 문제 (eof A+B)
void EofWhileSum()
{
	vector<int> vecResult;

	int a, b;
	cin.tie(NULL);

	while (!(cin >> a >> b).eof())
		vecResult.push_back(a + b);


	for (unsigned int i = 0; i < vecResult.size(); i++)
		cout << vecResult[i] << "\n";
}
// 1110번 문제 (사이클 길이 구하기)
void CycleLength()
{
	int a, b, c;
	cin.tie(NULL);
	cin >> a;

	if (a < 10)
		a *= 10;

	b = a;
	c = 0;

	while (true)
	{
		int d, e;

		d = a / 10;
		e = a % 10;

		a = (e * 10) + ((d + e) % 10);

		c++;
		if (b == a)
			break;
	}

	cout << c << endl;
}
#pragma endregion
// 배열 (백준 5단계)
#pragma region BaekJoon_Level5
// 10818번 문제 (최소,최대값 구하기)
void MinMax()
{
	vector<int> vecResult;
	int a, b, c, d;
	cin.tie(NULL);
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b;
		vecResult.push_back(b);
	}

	c = vecResult[0];
	d = vecResult[0];

	for (unsigned i = 0; i < vecResult.size(); i++)
	{
		if (c > vecResult[i])
			c = vecResult[i];

		if (d < vecResult[i])
			d = vecResult[i];
	}

	cout << c << " " << d;
}
// 2562번 문제 (최대값 구하기)
void Max()
{
	int a = 0, b = 0, c = 0;
	int iArray[9];

	cin.tie(NULL);
	for (int i = 0; i < 9; i++)
	{
		cin >> a;
		iArray[i] = a;
	}

	for (int i = 0; i < 9; i++)
	{
		if (b < iArray[i])
		{
			b = iArray[i];
			c = int(i + 1);
		}
	}

	cout << b << "\n" << c;
}
// 2577번 문제 (숫자 갯수)
void CountNumber()
{
	int a, b, c, d;
	int e[10] = { 0,0,0,0,0,0,0,0,0,0 };
	string str;
	cin.tie(NULL);
	cin >> a >> b >> c;

	d = a * b * c;

	str = to_string(d);

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (str[j] == (char)(i + 48))
				e[i]++;
		}
	}

	for (int i = 0; i < 10; i++)
		cout << e[i] << endl;
}
// 3052번 문제 (다른 데이터 갯수 구하기)
void DiffDataCount()
{
	int a[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int b = 0;
	cin.tie(NULL);
	for (int i = 0; i < 10; i++)
	{
		int d = 0;
		cin >> d;
		a[i] = d % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (a[i] == a[j])
				a[i] = -1;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (a[i] != -1)
			b++;
	}


	cout << b << "\n";
}
// 1546번 문제 (평균조작)
void FakeAverage()
{
	double* a;
	int b;
	double d = 0, e = 0;

	cin.tie(NULL);
	cout << fixed;
	cout.precision(8);

	cin >> b;

	a = new double[b];

	for (int i = 0; i < b; i++)
	{
		double c;
		cin >> c;
		a[i] = c;
	}

	for (int i = 0; i < b; i++)
	{
		if (d < a[i])
			d = a[i];
	}

	for (int i = 0; i < b; i++)
	{
		e += (a[i] / d) * 100.0f;
	}

	cout << e / b << "\n";
}
// 8958번 문제 (OX퀴즈)
void OXQuiz()
{
	int a;
	string* b;
	int* d;

	cin.tie(NULL);
	cin >> a;

	b = new string[a];
	d = new int[a];

	for (int i = 0; i < a; i++)
	{
		char c[80];
		cin >> c;
		b[i] = c;
		d[i] = 0;
	}

	for (int i = 0; i < a; i++)
	{
		int e = 0;
		for (int j = 0; j < 80; j++)
		{
			if (b[i][j] == '\0')
				break;

			if (b[i][j] == 'O')
				e++;
			else if (b[i][j] == 'X')
				e = 0;

			d[i] += e;
		}
	}

	for (int i = 0; i < a; i++)
		cout << d[i] << "\n";
}
// 4344번 문제 (평균넘는수)
void HighAverage()
{
	float** a;
	int b, c;
	float e = 0.0f;
	float* result;

	cin.tie(NULL);
	cin >> b;
	cout << fixed;
	cout.precision(3);

	a = new float* [b];

	for (int i = 0; i < b; i++)
	{
		cin >> c;
		a[i] = new float[c + 1];
		a[i][0] = (float)c;
		float d;

		for (int j = 1; j < c + 1; j++)
		{
			cin >> d;
			a[i][j] = d;
		}

		c = 0;
		d = 0;
	}

	for (int i = 0; i < b; i++)
	{
		e = 0.0f;

		for (int j = 1; j < a[i][0] + 1; j++)
		{
			e += a[i][j];
		}

		e /= a[i][0];
		int f = 0;
		result = new float[b];

		for (int j = 1; j < a[i][0] + 1; j++)
		{
			if (e < a[i][j])
				f++;
		}

		result[i] = (f / a[i][0]) * 100.0f;

		cout << result[i] << "%" << "\n";
	}
}
#pragma endregion
// 함수 (백준 6단계)
#pragma region BaekJoon_Level6
// 15596번 문제 (정수 N개의 합)
long long sum(vector<int>& a)
{
	long long sum = 0;
	for (unsigned int i = 0; i < a.size(); i++)
		sum += a[i];

	return sum;
}
// 4673번 문제 (셀프넘버)
void SelfNumber(int n)
{
	bool* a = new bool[n] { false };
	int b = 0, c = 0;

	for (int i = 1; i <= n; i++)
	{
		c = b = i;

		if (a[i - 1] == false)
			cout << i << "\n";

		while (true)
		{
			c += b % 10;
			b /= 10;

			if (b <= 0)
				break;
		}

		if ((c - 1) < 10000)
			a[c - 1] = true;
	}
}
// 1065번 문제 (한수(등차수열관련문제))
void Arithmetic(int n)
{
	int a = 0;
	int b, c, d;
	for (int i = 1; i <= n; i++)
	{
		if (i < 100)
		{
			++a;
			continue;
		}

		if (i == 1000)
			continue;

		d = i % 10;
		c = (i / 10) % 10;
		b = ((i / 10) / 10) % 10;

		if (((d-c) == (c-b)) || ((b-c) == (c-d)))
			++a;
	}

	cout << a;
}

#pragma endregion
// 문자열 (백준 7단계)
#pragma region BaekJoon_Level7
// 11654번 문제 (아스키코드)
void AsciiCode()
{
	char a;

	cin.tie(NULL);
	cin >> a;

	cout << int(a) << endl;
}
// 11720번 문제 (숫자의 합)
void TotalSum()
{
	char* a;
	int b = 0, c = 0, d = 0;

	cin.tie(NULL);
	cin >> b;

	a = new char[b];

	cin >> a;

	for (int i = 0; i < b; i++)
		d += a[i] - '0';

	cout << d << endl;
}
// 10809번 문제 (알파벳 찾기)
void FindAlphabet()
{
	char a[101] = {};
	int b[26] = {};
	fill_n(b, 26, -1);

	cin.tie(NULL);
	cin >> a;

	for (long unsigned int i = 0; i < strlen(a); i++)
	{
		int c = a[i] - 97;
		if (b[c] == -1) { b[c] = i; }
	}

	for (const auto& a : b)
		cout << a << " ";
}
// 2675번 문제 (문자열 반복 문제)
void RepeatString()
{
	int a = 0;
	int b = 0;
	string c = "";
	string* d;

	cin.tie(NULL);
	cin >> a;

	d = new string[a];

	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;

		for (const auto& a : c)
		{
			for (int j = 0; j < b; j++)
				d[i].push_back(a);
		}
	}

	for (int i = 0; i < a; i++)
		cout << d[i] << endl;
}
// 1157번 문제 (가장 많은 수의 알파벳)
void MostUseSpell()
{
	char a[1000001] = "";

	cin.tie(NULL);
	cin >> a;

	int b[26];
	int c = 0, d = 0;
	long unsigned int f = strlen(a);
	bool IsCheck = false;

	fill_n(b, 26, 0);

	for (long unsigned int i = 0; i < f; i++)
	{
		int e = 0;

		if ((a[i] >= 97) && (a[i] <= 122))
			e = a[i] - 97;
		if ((a[i] >= 65) && (a[i] <= 90))
			e = a[i] - 65;

		if (e >= 0 && e < 26)
			b[e]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (b[i] > c)
		{
			c = b[i];
			d = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (c == b[i] && d != i)
			IsCheck = true;
	}

	if (IsCheck)
		cout << "?";
	else
		cout << (char)(d + 65);
}
// 1152번 문제 (단어 갯수 구하기)
void CountWord()
{
	char a[1000001] = "";

	cin.tie(NULL);
	cin.getline(a, 1000001);
	int b = 0;
	long unsigned int c = strlen(a);

	for (long unsigned int i = 0; i < c; i++)
	{
		if (((a[i + 1] == '\0') && a[i] != ' ') || (a[i + 1] == ' '))
			++b;
	}

	cout << b;
}
// 2908번 문제 (역수 크기 비교)
void ReverseCompare()
{
	char a[4] = {}, b[4] = {};
	int c = 0;

	cin.tie(NULL);
	cin >> a >> b;

	long unsigned int d = strlen(a);
	long unsigned int e = strlen(b);
	int f = 0, g = 0;

	for (long unsigned int i = 0; i < (d / 2); i++)
	{
		char temp = a[i];
		a[i] = a[d - i - 1];
		a[d - i - 1] = temp;
	}

	f = atoi(a);

	for (long unsigned int i = 0; i < (e / 2); i++)
	{
		char temp = b[i];
		b[i] = b[e - i - 1];
		b[e - i - 1] = temp;
	}

	g = atoi(b);

	if (f > g)
		g = f;

	cout << g;
}
// 5622번 문제 (다이얼) ★
void Dial()
{
	multimap<int, char> mulmap;

	int a = 0, b = 0, e = 0;
	char c[16] = "";

	for (int i = 0; i < 8; i++)
	{
		if (i == 5 || i == 7)
			b = 4;
		else
			b = 3;

		for (int j = 0; j < b; j++)
			mulmap.insert(make_pair(i + 2, char(65 + (i * 3) + j + a)));

		if (b == 4)
			++a;
	}

	cin.tie(NULL);
	cin >> c;
	long unsigned int d = strlen(c);

	for (long unsigned int i = 0; i < d; i++)
	{
		for (const auto& a : mulmap)
		{
			if (a.second == c[i])
			{
				e += a.first + 1;
			}
		}
	}

	cout << e;
}
// 2941번 문제 (크로아티아 알파벳) ★
void CroatiaSpell()
{

}

#pragma endregion


int main()
{
	multimap<int, string> spellmap;

	spellmap.insert(make_pair(2, "c="));
	spellmap.insert(make_pair(2, "c-"));
	spellmap.insert(make_pair(3, "dz="));
	spellmap.insert(make_pair(2, "d-"));
	spellmap.insert(make_pair(2, "lj"));
	spellmap.insert(make_pair(2, "nj"));
	spellmap.insert(make_pair(2, "s="));
	spellmap.insert(make_pair(2, "z="));

	string a = "";
	int c = 0, d = 0, e = 0, f = 0;
	
	cin.tie(NULL);
	cin >> a;

	for (const auto& b : spellmap)
	{
		e = a.find(b.second, c);
		if (a.npos != e)
		{
			d++;
		}
	}

	cout << d;




	return 0;
}


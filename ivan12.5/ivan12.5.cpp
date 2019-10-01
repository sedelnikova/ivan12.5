// ivan 12.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//5. Описать функцию Fact2(N) вещественного типа, вычисляющую двойной факториал: 
//N!!= 1•3•5•. ..•N, если N — нечетное;
//N!!= 2•4•6•. ..•N, если N — четное(N > 0 — параметр целого типа; вещественное возвращаемое значение используется 
//для того, чтобы избежать целочисленного переполнения при больших значениях N).


#include <iostream>
#include <cmath>
using namespace std;

double Fact2(int n)
{
	double h;
	h = 1;
	if (n % 2 == 0) {
		for (int i = 2; i <= n; i = i + 2)
		{
			h = h * i;
		}
	}
	else
	{
		for (int i = 1; i <= n; i = i + 2)
		{
			h = h * i;
		}
	}

	return h;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "Введите, пожалуйста, N > 0: " << endl;
	cin >> a;
	if (a > 0)
	{
		cout << Fact2(a) << endl;
	}
	return 0;

}
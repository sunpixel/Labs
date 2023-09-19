#include <iostream>
#include <math.h>
#include <cmath>

#include "deffinitions.h"

using namespace std;

// lab 7 Требуется ИНФА

void method_7()
{
	cout << "\n-------------------------\n";
	cout << "Метод трапеций\n\n";
	double a, b;
	double s, s0;
	int n;
	int i = 0;
	const double p = 0.001;				// Precision is a pre-set variable
	const double otvet = 0.693147;		// Answer is correct
	cout << "Введите левую границу интегрирования: ";
	cin >> a;
	cout << "Введите правую границу интегрирования: ";
	cin >> b;
	cout << "Введите n: ";
	cin >> n;
	s = trap_integral(a, b, n, otvet); //первое приближение для интеграла
	do
	{
		s0 = s;
		n = 2 * n;
		i += 1;
		s = trap_integral(a, b, n, otvet);
	} while (abs(s - s0) > p);
	cout << "\nИнтеграл: " << otvet << endl;
}
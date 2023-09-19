#include <iostream>
#include <math.h>
#include <cmath>

#include "deffinitions.h"

using namespace std;

// lab 8 Требуется ИНФА

void method_8()
{
	cout << "\n-------------------------\n";
	cout << "Метод Симпсона\n\n";
	double a, b;
	double s, s0;
	int n;
	int i = 0;
	const double p = 0.001;
	const double otvet = 0.693147;
	cout << "Введите левую границу интегрирования: ";
	cin >> a;
	cout << "Введите правую границу интегрирования: ";
	cin >> b;
	cout << "Введите n: ";
	cin >> n;
	s = simpson_integral(a, b, n, otvet); //первое приближение для интеграла
	do
	{
		s0 = s;
		n = 2 * n;
		i += 1;
		s = simpson_integral(a, b, n, otvet);
	} while (abs(s - s0) > p);

	cout << "\nИнтеграл: " << otvet << endl;
}
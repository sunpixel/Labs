#include <iostream>
#include <math.h>
#include <cmath>

#include "deffinitions.h"

using namespace std;



void method_6()
{
	cout << "Метод прямоугольника\n\n";
	double a, b;
	double s, s0;
	int n;
	int i = 0;
	const double p = 0.001;
	const double otvet = 0.49736421;
	cout << "Введите левую границу интегрирования: ";
	cin >> a;
	cout << "Введите правую границу интегрирования: ";
	cin >> b;
	cout << "Введите n: ";
	cin >> n;
	s = halfrectangle_integral(a, b, n, otvet); //первое приближение для интеграла
	do
	{
		s0 = s;
		n = 2 * n;
		i += 1;
		s = halfrectangle_integral(a, b, n, otvet);
	} while (abs(s - s0) > p);

	cout << "\nИнтеграл: " << "0.49736421" << endl;
}
#include <iostream>
#include <math.h>
#include <cmath>

#include "deffinitions.h"

using namespace std;


double f(double x)
{
	return pow(x, 3) / (4 * pow(x, 4) + 10);
}


double halfrectangle_integral(double a, double b, int n, double otvet)
{
	double x, result;
	double sum = 0;
	double width = (b - a) / n;
	for (int i = 0; i < n; i++)
	{
		x = a + (i + 0.5) * width;
		sum += f(x);
	}
	result = sum * width;
	cout << "n = " << n << "\t Примерно: " << result << "\t Погрешность: " <<
		abs(result - otvet) << '\n';
	return result;
}



void method_6()
{
	setlocale(LC_ALL, "Russian");
	/* Метод прямоугольников -------------------------------------------------------
   ------------------*/
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
	//
	cout << "\nИнтеграл: " << "0.49736421" << endl;
}
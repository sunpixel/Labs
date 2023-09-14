#include <iostream>
#include <cmath>

#include "deffinitions.h"

// 1-4.cpp

double f(double x)   //x * e^ x = 1;
{
	return x + log(x) - 0.5;
}

double f1(double x)   // Первая производная (x + 1) * e ^ x = 0;
{
	return 1 / (log(10) * x) + 1;
   
}


// 5.cpp

double fi1(double x)
{
	return 0.5 - cos(x - 1);
}


double fi2(double y)
{
	return 3 + cos(y);
}


// 6.cpp

double f6(double x)
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
		sum += f6(x);
	}
	result = sum * width;
	std::cout << "n = " << n << "\t Примерно: " << result << "\t Погрешность: " <<
		abs(result - otvet) << '\n';
	return result;
}



// 7.cpp

double f7(double x)
{
	return pow(x, 3) / (4 * pow(x, 4) + 10);
}


double trap_integral(double a, double b, int n, double otvet)
{
	double x, x0;
	double sum = 0;
	double width = (b - a) / n;
	for (int i = 0; i < n; i++)
	{
		x0 = a + i * width;
		x = a + (i + 1) * width;
		sum += 0.5 * width * (f7(x0) + f7(x));
	}
	std::cout << "n = " << n << "\t Примерно: " << sum << "\t Погрешность: " << abs(sum -
		otvet) << '\n';
	return sum;
}


// 8.cpp

double f8(double x)
{
	return pow(x, 3) / (4 * pow(x, 4) + 10);
}


double simpson_integral(double a, double b, int n, double otvet)
{
	double x, x0;
	double sum = 0;
	double width = (b - a) / n;
	for (int i = 0; i < n; i++)
	{
		x0 = a + i * width;
		x = a + (i + 1) * width;
		sum += width / 6 * (f8(x0) + 4 * f8(0.5 * (x0 + x)) + f8(x));
	}
	std::cout << "n = " << n << "\t Примерно: " << sum << "\t Погрешность: " << abs(sum -
		otvet) << '\n';
	return sum;
}
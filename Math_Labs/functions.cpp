#include <iostream>
#include <cmath>

#include "deffinitions.h"

// 1-4.cpp

double f(double x)
{
	return 2 * sin(x - 0.6) - 1.5 + x;
}

double f1(double x)
{
	return 2 * cos(x- 3/5) + 1;
   
}


// 5.cpp

double fi1(double x)	// Calculating y
{
	return -0.4 - sin(x);
}


double fi2(double y)	// Calculating x
{
	return cos(y + 1) / 2;
}


// 6.cpp 


double f6(double x)
{
	return 1 / tan(x);
}



double halfrectangle_integral(double a = 0.785, double b = 1.57, int n, double otvet)
{
	double x, result;
	double sum = 0;
	double width = (b - a) / n;
	for (int i = 0; i < n; i++)
	{
		x = a + (i + 0.5) * width;
		sum += f6(x);
		std::cout << "i = " << i << "\t Примерно: " << sum << "\t Погрешность: " << abs(sum - otvet) << '\n';
	}
	result = sum * width;
	std::cout << "n = " << n << "\t Примерно: " << result << "\t Погрешность: " << abs(result - otvet) << '\n';
	std::cout << "\n\n##############################\n\n";
	return result;
}


	
// 7.cpp

double f7(double x)
{
	return 1 / tan(x);
}



double trap_integral(double a = 0.785, double b = 1.57, int n, double otvet)
{
	double x, x0;
	double sum = 0;
	double width = (b - a) / n;		// gets equal width
	for (int i = 0; i < n; i++)
	{
		x0 = a + i * width;
		x = a + (i + 1) * width;
		sum += 0.5 * width * (f7(x0) + f7(x));
		std::cout << "i = " << i << "\t Примерно: " << sum << "\t Погрешность: " << abs(sum - otvet) << '\n';
	}
	std::cout << "n = " << n << "\t Примерно: " << sum << "\t Погрешность: " << abs(sum  - otvet) << '\n';
	std::cout << "\n\n##############################\n\n";
	return sum;
}


// 8.cpp


double f8(double x)
{
	return 1 / tan(x);
}



double simpson_integral(double a = 0.785, double b = 1.57, int n, double otvet)
{
	double x, x0;
	double sum = 0;
	double width = (b - a) / n;
	for (int i = 0; i < n; i++)
	{
		x0 = a + i * width;
		x = a + (i + 1) * width;
		sum += width / 6 * (f8(x0) + 4 * f8(0.5 * (x0 + x)) + f8(x));
		std::cout << "i = " << i << "\t Примерно: " << sum << "\t Погрешность: " << abs(sum - otvet) << '\n';
	}
	std::cout << "n = " << n << "\t Примерно: " << sum << "\t Погрешность: " << abs(sum - otvet) << '\n';
	std::cout << "\n\n##############################\n\n";
	return sum;
}
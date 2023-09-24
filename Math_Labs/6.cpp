#include <iostream>
#include <math.h>
#include <cmath>

#include "deffinitions.h"

using namespace std;

// lab 6

void method_6()
{
	cout << "\n-------------------------\n";
	cout << "Метод прямоугольника\n\n";
	double a, b;
	double s, s0;
	int n;
	int i = 0;
	const double p = 0.001;
	const double otvet = 0.3465735902799726547086160607290882840377500671801276270603400047;
	cout << "Введите левую границу интегрирования: ";
	cin >> a;
	cout << "Введите правую границу интегрирования: ";
	cin >> b;
	cout << "Введите n: ";
	cin >> n;
	s = halfrectangle_integral(a, b, n, otvet); //первое приближение для интеграла	/ Выбираем центральную точку на стороне прямоугольника
	do
	{
		s0 = s;
		n = 2 * n;								// Для точности
		i += 1;
		s = halfrectangle_integral(a, b, n, otvet);
	} while (abs(s - s0) > p);

	cout << "\nИнтеграл: " << otvet << endl;
}
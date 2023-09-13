#include <iostream>
#include <math.h>
#include <cmath>

#include "deffinitions.h"

using namespace std;



void method_7()
{
	cout << "ћетод трапеций\n\n";
	double a, b;
	double s, s0;
	int n;
	int i = 0;
	const double p = 0.001;
	const double otvet = 0.49736421;
	cout << "¬ведите левую границу интегрировани€: ";
	cin >> a;
	cout << "¬ведите правую границу интегрировани€: ";
	cin >> b;
	cout << "¬ведите n: ";
	cin >> n;
	s = trap_integral(a, b, n, otvet); //первое приближение дл€ интеграла
	do
	{
		s0 = s;
		n = 2 * n;
		i += 1;
		s = trap_integral(a, b, n, otvet);
	} while (abs(s - s0) > p);
	cout << "\n»нтеграл: " << otvet << endl;
}
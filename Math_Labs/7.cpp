#include <iostream>
#include <math.h>
#include <cmath>

#include "deffinitions.h"

using namespace std;

// lab 7 

void method_7()
{
	// formula to calculate AREA is (a+b) / 2 * h 
	cout << "\n-------------------------\n";
	cout << "ћетод трапеций\n\n";
	double a, b;
	double s, s0;
	int n;
	int i = 0;
	const double p = 0.001;				// Precision is a pre-set variable
	const double otvet = 0.693147;		// Answer is correct
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
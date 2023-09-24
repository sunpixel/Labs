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
	cout << "����� ��������\n\n";
	double a, b;
	double s, s0;
	int n;
	int i = 0;
	const double p = 0.001;				// Precision is a pre-set variable
	const double otvet = 0.3465735902799726547086160607290882840377500671801276270603400047;		// Answer is correct
	cout << "������� ����� ������� ��������������: ";
	cin >> a;
	cout << "������� ������ ������� ��������������: ";
	cin >> b;
	cout << "������� n: ";
	cin >> n;
	s = trap_integral(a, b, n, otvet); //������ ����������� ��� ���������
	do
	{
		s0 = s;
		n = 2 * n;
		i += 1;
		s = trap_integral(a, b, n, otvet);
	} while (abs(s - s0) > p);
	cout << "\n��������: " << otvet << endl;
}
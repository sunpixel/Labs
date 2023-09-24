#include <iostream>
#include <math.h>
#include <cmath>

#include "deffinitions.h"

using namespace std;

// lab 4

// ��������� ���������� ������


// y_1 = 0.582693214836437
// x_1 = 1.799929232862144

void method_5()
{
	cout << "\n\n-------------------------\n";
	cout << "������������ ������ 4\n\n";	// ������� �������� ��� ������� ��������� ��� ����� �����
	double x0 = 0, y0 = 0, x, y;
	const double p = 0.001;
	do
	{
		y = fi1(x0);
		x = fi2(y0);
		y0 = y;
		x0 = x;
	} while (abs(x - x0) > p && abs(y - y0) > p);

	cout << "�����: ~ (" << x << ", " << y << ')';
}
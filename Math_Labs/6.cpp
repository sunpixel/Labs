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
	cout << "n = " << n << "\t ��������: " << result << "\t �����������: " <<
		abs(result - otvet) << '\n';
	return result;
}



void method_6()
{
	setlocale(LC_ALL, "Russian");
	/* ����� ��������������� -------------------------------------------------------
   ------------------*/
	double a, b;
	double s, s0;
	int n;
	int i = 0;
	const double p = 0.001;
	const double otvet = 0.49736421;
	cout << "������� ����� ������� ��������������: ";
	cin >> a;
	cout << "������� ������ ������� ��������������: ";
	cin >> b;
	cout << "������� n: ";
	cin >> n;
	s = halfrectangle_integral(a, b, n, otvet); //������ ����������� ��� ���������
	do
	{
		s0 = s;
		n = 2 * n;
		i += 1;
		s = halfrectangle_integral(a, b, n, otvet);
	} while (abs(s - s0) > p);
	//
	cout << "\n��������: " << "0.49736421" << endl;
}
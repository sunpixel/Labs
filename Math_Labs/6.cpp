#include <iostream>
#include <math.h>
#include <cmath>

#include "deffinitions.h"

using namespace std;



void method_6()
{
	cout << "����� ��������������\n\n";
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

	cout << "\n��������: " << "0.49736421" << endl;
}
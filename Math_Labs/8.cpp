#include <iostream>
#include <math.h>
#include <cmath>

#include "deffinitions.h"

using namespace std;

// lab 8 ��������� ����

void method_8()
{
	cout << "\n-------------------------\n";
	cout << "����� ��������\n\n";
	double a, b;
	double s, s0;
	int n;
	int i = 0;
	const double p = 0.001;
	const double otvet = 0.3465735902799726547086160607290882840377500671801276270603400047;
	cout << "������� ����� ������� ��������������: ";
	cin >> a;
	cout << "������� ������ ������� ��������������: ";
	cin >> b;
	cout << "������� n: ";
	cin >> n;
	s = simpson_integral(a, b, n, otvet); //������ ����������� ��� ���������
	do
	{
		s0 = s;
		n = 2 * n;
		i += 1;
		s = simpson_integral(a, b, n, otvet);
	} while (abs(s - s0) > p);

	cout << "\n��������: " << otvet << endl;
}
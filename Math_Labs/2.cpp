#include <vector>
#include <iostream>
#include <string>
#include <locale.h>
#include <cmath>

using namespace std;



double f(double x)   //x * e^ x = 1;
{
    return x * exp(x) - 1;
}



void method()
{
    int i = 0;
    double c;
    double a = 0; double b = 0; double p = 0;

    while (b <= a)
    {
        cout << "������� ������ �������: ";
        cin >> a;
        cout << "������� ����� �������: ";
        cin >> b;
        cout << "������� ��������: ";
        cin >> p;
        if (b <= a) cout << "�� ����������� ����� �������" << '\n';
        if (abs(b) + abs(a) < p) cout << "�������� ��������� �������" << '\n';
        if (f(a) * f(b) >= 0)
        {
            cout << "������������� ����� ��� �� ���� �������" << '\n';
            a = 0;
            b = 0;
        }
    }

    c = a - (b - a) / (f(b) - f(a)) * f(a);
    while (true)
    {
        if (f(a) * f(c) < 0)
            b = c;
        else if (f(b) * f(c) < 0)
            a = c;

        i++;
        if (f(c - p) * f(c + p) < 0) break;
        c = a - (b - a) / (f(b) - f(a)) * f(a);
    }
    cout << "x �������� ����� " << c << " � ��������� " << p << ". \n���������� ��������: " << i << '\n';
}
//#include <vector>
//#include <iostream>
//#include <string>
//#include <locale.h>
//#include <cmath>
//
//using namespace std;
//
//double f(double x)   //x * e^ x = 1;
//{
//    return x * exp(x) - 1;
//}
//
//double f1(double x)   // ������ ����������� (x + 1) * e ^ x = 0;
//{
//    return (x + 1) * exp(x);
//}
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    // ����� ������� ������� ������� ---------------------------------------------------------------------------
//    bool bul = true;
//    int i = 0;
//    double c, res;
//    double a = 0; double b = 0; double p = 0;
//
//    while (b <= a)
//    {
//        cout << "������� ������ �������: ";
//        cin >> a;
//        cout << "������� ����� �������: ";
//        cin >> b;
//        cout << "������� ��������: ";
//        cin >> p;
//        if (b <= a) cout << "�� ����������� ����� �������" << '\n';
//        if (abs(b) + abs(a) < p) cout << "�������� ��������� �������" << '\n';
//        if (f(a) * f(b) >= 0)
//        {
//            cout << "������������� ����� ��� �� ���� �������" << '\n';
//            a = 0;
//            b = 0;
//        }
//    }
//
//    c = (a + b) / 2;
//    while (true)
//    {
//        if (f(a) * f(c) < 0)
//            b = c;
//        else if (f(b) * f(c) < 0)
//            a = c;
//        i++;
//        c = (a + b) / 2;
//        if (f(c - p) * f(c + p) < 0) break;
//        //if (abs(b - a) < p) break;
//    }
//    cout << "x �������� ����� " << c << " � ��������� " << p << ". \n���������� ��������: " << i << '\n';
//
//    // V����� ���� ---------------------------------------------------------------------------------------
//    int i = 0;
//    double c;
//    double a = 0; double b = 0; double p = 0;
//
//    while (b <= a)
//    {
//        cout << "������� ������ �������: ";
//        cin >> a;
//        cout << "������� ����� �������: ";
//        cin >> b;
//        cout << "������� ��������: ";
//        cin >> p;
//        if (b <= a) cout << "�� ����������� ����� �������" << '\n';
//        if (abs(b) + abs(a) < p) cout << "�������� ��������� �������" << '\n';
//        if (f(a) * f(b) >= 0)
//        {
//            cout << "������������� ����� ��� �� ���� �������" << '\n';
//            a = 0;
//            b = 0;
//        }
//    }
//
//    c = a - (b - a) / (f(b) - f(a)) * f(a);
//    while (true)
//    {
//        if (f(a) * f(c) < 0)
//            b = c;
//        else if (f(b) * f(c) < 0)
//            a = c;
//
//        i++;
//        if (f(c - p) * f(c + p) < 0) break;
//        c = a - (b - a) / (f(b) - f(a)) * f(a);
//    }
//    cout << "x �������� ����� " << c << " � ��������� " << p << ". \n���������� ��������: " << i << '\n';
//    //    
//    // ����� ������� ------------------------------------------------------------------------------------
//    long double x0 = 0;
//    long double x;
//
//    cout << "������� ��������� ����������� �����: ";
//    cin >> x0;
//    cout << "������� ��������: ";
//    cin >> p;
//
//    i = 0;
//
//    while (true)
//    {
//        x = x0 - f(x0) / f1(x0);
//        i++;
//        if (f(x - p) * f(x + p) < 0) break;
//        x0 = x;
//    }
//    cout << "x �������� ����� " << x << " � ��������� " << p << ". \n���������� ��������: " << i << '\n';
//
//    // ����� ������� �������� ---------------------------------------------------------------------------
//
//    long double x0 = 0;
//    long double x, p;
//    int i = 0;
//
//    cout << "������� ��������� ����������� �����: ";
//    cin >> x0;
//    cout << "������� ��������: ";
//    cin >> p;
//
//    int m = 2;
//    i = 0;
//
//    while (true)
//    {
//        x = x0 - f(x0) / m;
//        i++;
//        if (f(x - p) * f(x + p) < 0) break;
//        x0 = x;
//    }
//    cout << "x �������� ����� " << x << " � ��������� " << p << ". \n���������� ��������: " << i;
//
//}
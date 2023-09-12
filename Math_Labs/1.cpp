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



void method_1()
{
    bool bul = true;
    int i = 0;
    double c, res;
    double a = 0; double b = 0; double p = 0;

    while (b <= a)
    {
        cout << "Введите начало отрезка: ";
        cin >> a;
        cout << "Введите конец отрезка: ";
        cin >> b;
        cout << "Введите точность: ";
        cin >> p;
        if (b <= a) cout << "Вы неправильно ввели отрезок" << '\n';
        if (abs(b) + abs(a) < p) cout << "Точность превышает отрезок" << '\n';
        if (f(a) * f(b) >= 0)
        {
            cout << "Единственного корня нет на этом отрезке" << '\n';
            a = 0;
            b = 0;
        }
    }

    c = (a + b) / 2;
    while (true)
    {
        if (f(a) * f(c) < 0)
            b = c;
        else if (f(b) * f(c) < 0)
            a = c;
        i++;
        c = (a + b) / 2;
        if (f(c - p) * f(c + p) < 0) break;
    }
    cout << "x примерно равен " << c << " с точностью " << p << ". \nКоличество итераций: " << i << '\n';
}




void run_1() { cout << "Метод Дихотомии\n", method_1(); }
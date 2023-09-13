#include <vector>
#include <iostream>
#include <string>
#include <locale.h>
#include <cmath>

#include "deffinitions.h";



using namespace std;

// lab 2

void method_1()
{
    cout << "Метод дихотомии\n\n";
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

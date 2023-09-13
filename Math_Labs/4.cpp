#include <vector>
#include <iostream>
#include <string>
#include <locale.h>
#include <cmath>

#include "deffinitions.h";



using namespace std;



void method_4()
{
    cout << "Метод Хорд\n\n";

    long double x0 = 0;
    long double x, p;
    int i = 0;

    cout << "Введите начальное приближение корня: ";
    cin >> x0;
    cout << "Введите точность: ";
    cin >> p;

    int m = 2;
    i = 0;

    while (true)
    {
        x = x0 - f(x0) / m;
        i++;
        if (f(x - p) * f(x + p) < 0) break;
        x0 = x;
    }
    cout << "x примерно равен " << x << " с точностью " << p << ". \nКоличество итераций: " << i;
}

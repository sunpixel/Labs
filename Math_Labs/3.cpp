#include <vector>
#include <iostream>
#include <string>
#include <locale.h>
#include <cmath>

#include "deffinitions.h";



using namespace std;


//lab 3

void method_3()
{
    cout << "\n-------------------------\n";
    cout << "Метод Ньютона\n\n";

    int i;
    long double x0 = 0;
    long double x;
    double p;

    cout << "Введите начальное приближение корня: ";
    cin >> x0;
    cout << "Введите точность: ";
    cin >> p;

    i = 0;

    while (true)
    {
        x = x0 - f(x0) / f1(x0);
        i++;
        if (f(x - p) * f(x + p) < 0) break;
        x0 = x;
    }
    cout << "x примерно равен " << x << " с точностью " << p << ". \nКоличество итераций: " << i << '\n';
}
#include <iostream>
#include <cmath>

#include "deffinitions.h"


double f(double x)   //x * e^ x = 1;
{
    return x * exp(x) - 1;
}

double f1(double x)   // Первая производная (x + 1) * e ^ x = 0;
{
    return (x + 1) * exp(x);
}
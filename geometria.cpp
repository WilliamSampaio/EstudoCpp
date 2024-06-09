#include <cmath>
#include "geometria.h"

double areaRetangulo(double l1, double l2)
{
    return l1 * l2;
}

double areaQuadrado(double l)
{
    return l * l;
}

double areaCirculo(double r)
{
    return M_PI * (r * r);
}

int fatorial(int n){
    return (n == 0) ? 1 : n * fatorial(n -1);
}

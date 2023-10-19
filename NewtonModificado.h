#include <iostream>
#include <cmath>

#define constA          1.0

// f(d) = a*ed – 4*d2
//f(x) here
double f (double x){
    constA * std::exp(x) - 4*(x*x);
}
//g(x) = derivative of f(x)
double g (double x){
    constA * std::exp(x) - 8*x;
}
double NewtonModificado( double (*f) (double) ,  double a, double x, double epsilon)
{   
    
    double fLx0 = g(x);
}

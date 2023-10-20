#include <iostream>
#include <cmath>
#include "NewtonModificado.h"

#define constA          1.0
#define episilon1       1e-4
#define episilon2       1e-8


int main (void){
    std::cout << newtonModified(&func,&derivative,constA,0.5,pow(10,-4),pow(10,-8)) << std::endl;
    return 0;
}

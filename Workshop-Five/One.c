#include <stdio.h>
/*
Create a structure to hold any complex number x+iy. Write a program that uses the 
structure to read two complex numbers and display a third complex number.
*/
// global structure 
struct Complex {
    float real;
    float imag;
};

//main function
int main(){
    struct Complex complex1, complex2, resultComplex;

    //complex number one
    complex1.real = 2.3;
    complex1.imag = 3.4;

    //complex number two
    complex2.real = 2.3;
    complex2.imag = 3.4;

    //ADDITON 
    resultComplex.real = complex1.real + complex2.real;
    resultComplex.imag = complex1.imag + complex2.imag;

    printf("\nSum of the complex numbers: %.2f + i%.2f\n", resultComplex.real, resultComplex.imag);

    return 0;
}

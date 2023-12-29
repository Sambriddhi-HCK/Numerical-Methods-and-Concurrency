/*
Write a program that uses the above structure to input two complex numbers and pass them to function,
which returns the sum of entered complex numbers in the main function and displays the sum.*/

#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

//function prototype for addition of two Complex numbers
struct Complex addComplex(struct Complex, struct Complex);

//main function
int main(){
    struct Complex complex1, complex2, resultComplex;

    //input the details for complex numbers 
    printf("Enter real and imaginary parts for the first complex number (x + iy):\n");
    printf("Real number (x): ");
    scanf("%f", &complex1.real);
    printf("Imaginary number (y): ");
    scanf("%f", &complex1.imag);

    printf("\n");
    printf("Enter real and imaginary parts for the second complex number (x + iy):\n");
    printf("Real number (x): ");
    scanf("%f", &complex2.real);
    printf("Imaginary number (y): ");
    scanf("%f", &complex2.imag);

    //calling function for addition
    resultComplex = addComplex(complex1,complex2);
    printf("\nSum of the complex numbers: %.2f + i%.2f\n", resultComplex.real, resultComplex.imag);

    return 0;
}

//function for addition of two Complex numbers
struct Complex addComplex(struct Complex cnum1, struct Complex cnum2){
    struct Complex result;
    result.real = cnum1.real + cnum2.real;
    result.imag = cnum1.imag + cnum2.imag;
    return result;
}
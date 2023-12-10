
/*
Write a void function named "equations" which solves simultancous equations. Your
program will take six parameters. Eg. function (double a, double b, double c, double d,
double e, double f). By solving simultaneous equations, you are finding where the two
lines cross each other, so your function should print an x and y coordinate.
ax + by = c - i
dx + ey = f - ii
a = number in front of x of equation one
b = number in front of y of equation one
C = constant of equation one
d =number in Iront of x of equation two
e = number in front of y of equation two
f = constant of equation two
*/

#include <stdio.h>

//function prototype
void equations(double, double, double, double, double, double);

int main() {
    double a, b , c , d, e, f;
    printf("To find where two lines meet, enter the following values \nwhere,ax + by = c - i\ndx + ey = f - ii :"); 
    printf("\na - number in front of x of equation one :"); 
    scanf("%lf",&a);
    printf("a - number in front of y of equation one :"); 
    scanf("%lf",&b);
    printf("a - constant of equation one :"); 
    scanf("%lf",&c);
    printf("a - number in front of x of equation two :"); 
    scanf("%lf",&d);
    printf("a - number in front of y of equation two :"); 
    scanf("%lf",&e);
    printf("a - constant of equation two :"); 
    scanf("%lf",&f);
    equations(a, b, c, d, e, f);
    return 0;
}

void equations(double a, double b, double c, double d, double e, double f) {
    double x, y;
    x = ((b * (-f))- (e  * (-c))) / ((a * e) - (d * b));
    y = (c - (a * x))/b;
    printf("The two lines cross each other at (%.2lf, %.2lf)", x, y);
}
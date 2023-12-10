#include <stdio.h>
#include<math.h>
/* 4. Write a function named "velocityCalc" which retums an appropriate value for the
formula "v = u + at", where v is the final velocity, u is the initial velocity, a is the
acceleration and t is the time that has elapsed. Depending upon which variable is set to
"NAN" when the function is called, your function should work it out and return the
value.
*/
//function prototype

float velocityCalc(char, float, float, float, float);

int main(){
    float v,u,a,t;
    char NaN_variable;

    printf("Enter the value you need to calculate: \n");
    printf("\n\nWe have,\n v = u + at \nwhere, v = final velovity,\n u = initial velocity, \n a = acceleration,\n t = time that has elapsed\n");
    scanf("%c",&NaN_variable);


    switch(NaN_variable){
        case'v':
        v = NAN;
        printf("Enter initial velocity (u): ");
        scanf("%f", &u);

        printf("Enter acceleration (a): ");
        scanf("%f", &a);

        printf("Enter time elapsed (t): ");
        scanf("%f", &t);

        printf( "Result: %.2f m/s", velocityCalc(NaN_variable,u,v,a,t));

        break;

        case 'u':
        u = NAN;

        printf("Enter final velocity (v): ");
        scanf("%f", &v);

        printf("Enter acceleration (a): ");
        scanf("%f", &a);

        printf("Enter time elapsed (t): ");
        scanf("%f", &t);

        printf( "Result: %.2fm/s", velocityCalc(NaN_variable,u,v,a,t));

        break;

        case 'a':
        a = NAN;

        printf("Enter final velocity (v): ");
        scanf("%f", &v);

        printf("Enter initial velocity (u): ");
        scanf("%f", &u);

        printf("Enter time elapsed (t): ");
        scanf("%f", &t);

        printf( "Result: %.2fm/s^2", velocityCalc(NaN_variable,u,v,a,t));

        break;

        case 't':

        t = NAN;

        printf("Enter final velocity (v): ");
        scanf("%f", &v);

        printf("Enter initial velocity (u): ");
        scanf("%f", &u);

        printf("Enter acceleration (a): ");
        scanf("%f", &a);
        printf( "Result: %.2fs", velocityCalc(NaN_variable,u,v,a,t));

        break;

        default:
            printf("Invalid input!");
        }


    return 0;
}

float velocityCalc(char c, float u, float v, float a, float t){
       if(isnan(v)){
        return v = u + (a * t);
       }
       else if(isnan(u)){
        return u = v - (a * t);
       }
       else if(isnan(a)){
        return a = (v - u) / t;
       }
       else if(isnan(t)){
        return t = (v - u) / a;;
       }
       return 0;
}

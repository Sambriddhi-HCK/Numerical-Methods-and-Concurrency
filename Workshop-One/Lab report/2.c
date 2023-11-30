#include<stdio.h>
int main(){
    char ch;
    double num1, num2;
    
    printf("Enter the associated character for the needed operation:\na.Addition\n b.Subtraction\nc.Multiplication\nd.Division\ne.Modulus Division\n->");
    scanf("%c",&ch);

    printf("Enter the numbers for calculation:\n Number 1: ");
    scanf("%lf",&num1);
    printf("\nNumber2:");
    scanf("%lf",&num2);

    switch(ch){
        case 'a':
        case 'A':
        printf("%lf + %lf = %lf", num1, num2, num1 + num2);
        break;

        case 'b':
        case 'B':
        printf("%lf - %lf = %lf", num1, num2, num1 - num2);
        break;
        
        case 'c':
        case 'C':
        printf("%lf * %lf = %lf", num1, num2, num1 * num2);
        break;

        case 'd':
        case 'D':
        if (num2 != 0) {
                printf("%lf / %lf = %lf", num1, num2, num1 / num2);
            }
            else{
                printf("Cannot divide by zero!\n");
            }
        break;

        

        case 'e':
        case 'E':
        printf("%lf %% %lf = %d", num1, num2, (int)num1 % (int)num2 );
        break;

        default:
        printf("Invalid expression!\n");
    }
    return 0;
}
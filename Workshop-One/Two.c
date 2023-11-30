#include <stdio.h>
int main(){
    int i,num,factorial = 1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (i = num;i>=1; i--){
    factorial = factorial * i;
    }
    printf("The factorial of %d is %d.",num,factorial);

}
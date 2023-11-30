#include<stdio.h>
int main(){
    int num,digit,sum = 0;
    printf("Enter a number: (Atleast 2-digit)");
    scanf("%d",&num);
    
    while(num!=0){
        digit = num % 10;  //Extracting the last digit
        sum += digit; // Add the digit to the sum(initially 0)
        num /=10; //remove the last digit
    }
    printf("The sum: %d",sum);
    return 0;
}
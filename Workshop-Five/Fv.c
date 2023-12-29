/*
Write a program that asks the user for two inputs: lower limit and upper limit. 
Now write a function named display that prints all the numbers between those limits.
NOTE: You are only allowed to pass one parameter to the function and lower limit and upper 
limit variables should not be made global.in
*/

#include <stdio.h>

struct Range
{
    int lower_limit;
    int upper_limit;
};

void display(struct Range );

int main(){
    struct Range range;
    int lower_limit, upper_limit;
    printf("To print a range of numbers:\n");
    printf("Enter a number for upper limit: ");
    scanf("%d", &range.upper_limit);
    printf("Enter a number for lower limit: ");
    scanf("%d", &range.lower_limit);
    display(range);

    return 0;
}

void display(struct Range range){
    printf("The numbers between %d and %d are: " , range.upper_limit,range.lower_limit);
    for (int i = range.lower_limit+1 ; i < range.upper_limit; i++){
        printf("%d ", i);
    }
    printf("\n");
}
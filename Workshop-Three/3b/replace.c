/*
Write a program to replace each element in an array with the integer value 5. 
You must take input from users in the main function and save it in an array. 
You must also take the size of an array from the user. 
You must create a function that takes two parameters: an array and length of the array. 
Your function should not return anything and it should not print anything.
You must print before and after replacing an element in an array in the main function.
*/
#include <stdio.h>

void replace(int [], int );

int main(){
    int number, i, temp = 0;
    int array1[50];
    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d",&number);
    for (i = 0; i< number; i++){
        printf("Enter the element %d: ", (i+1));
        scanf("%d", &array1[i]);
    }

    printf("Original arr: ");
    for (i = 0; i < number; i++){
        printf("%d " ,array1[i]);
    }
    printf("\n");

    replace(array1, number);

    printf("Replaced arr: ");
    for (i = 0; i < number; i++){
        printf("%d " ,array1[i]);
    }
    printf("\n");
}

void replace(int array1[], int number){
    for (int i = 0; i< number; i++){
        array1[i] = 5;
    }
}
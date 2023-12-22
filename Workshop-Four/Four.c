/*
Write a program that reads 'n' from the
user and allocates memory to hold n
integer numbers. Pass these numbers to a function tht return the sum 
*/
#include <stdio.h>
#include <stdlib.h>

int sum(int *, int );

int main(){
    int i, n;

    printf("Enter the number of element you want to store in the array: ");
    scanf("%d",&n); 

    int* arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL){
        printf("Memory allocation failed for array");
        free(arr); //free memory space
        return 1; //exit
    }

    printf("Enter elements for the array: \n");
    for (i = 0; i< n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    free(arr);
    printf("The sum of elements of the array is: %d", sum(arr, n));
    return 0;
}

int sum(int *arr, int length){
    int sum =0;
    for (int i = 0; i< length; i++){
        sum += arr[i];
    }
    return sum;
}
    
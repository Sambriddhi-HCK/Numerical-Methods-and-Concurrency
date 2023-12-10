/*
Write a program to read three integers using an array and find the smallest and 
largest among them.You must write a function for finding the largest and smallest integer and 
the result must be displayed in the main function itself. You are not allowed to create global variables. 
*/
#include <stdio.h>

int largesmall(int [], int *, int *);

int main(){
    int large, small;
    int arr[50];

    printf("Enter three numbers for the program. \n");
    printf("Enter number 1: ");
    scanf("%d", &arr[0]);
    printf("Enter number 2: ");
    scanf("%d", &arr[1]);
    printf("Enter number 3: ");
    scanf("%d", &arr[2]);

    //calling the function to find the smallest and the largest
    largesmall(arr, &large, &small);

    //display the result in the main function
    printf("The largest number among %d, %d and %d is: %d", arr[0], arr[1], arr[2], large);
    printf("\nThe smallest number among %d, %d and %d is: %d", arr[0], arr[1], arr[2], small);
    return 0;
}

// function define
int largesmall(int arr[], int *large, int *small){
    if (arr[0]>= arr[1] && arr[0] >= arr[2]){
        *large = arr[0];
    } else if (arr[1]>= arr[2] && arr[1] >= arr[0]){
        *large = arr[1];
    }else{
        *large = arr[2];
    }

    if (arr[0]<= arr[1] && arr[0] <= arr[2]){
        *small = arr[0];
    } else if (arr[1]<= arr[2] && arr[1] <= arr[0]){
        *small = arr[1];
    }else{
        *small = arr[2];
    }
    return 0;
}
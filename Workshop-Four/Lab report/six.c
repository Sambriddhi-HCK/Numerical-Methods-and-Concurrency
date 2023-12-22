/*
Write a C program to take an array using dynamic memory allocation
and print them, later add elements onto that array using the realloc
function and print them all.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, length, addedLength;

    printf("Enter the number of element you want to store in the array: ");
    scanf("%d",&length);

    int* arr = (int*)malloc((length) * sizeof(int));
    
    if (arr == NULL) 
    { printf( "Memory allocation for array failed. \n");
    free(arr); // free previiously allocated memory and
    return 1; //exit the program with an error code   
    }

    printf("Enter elements for the array: \n");
    for (i = 0; i< length; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("The array with the entered elements: ");
    for (i = 0; i< length; i++){
        printf("%d ", arr[i]);
    }

    printf("\nEnter the number of element you want to add in the array: ");
    scanf("%d",&addedLength);

    //reallocating memory space of the array to add elements
    //ptr = realloc (ptr, newsize) ;
    arr = realloc(arr, (length + addedLength) * sizeof(int));

    if (arr == NULL) {
        printf( "Memory allocation for array failed. \n");
        free(arr); // free previiously allocated memory and
        return 1; //exit the program with an error code   
    }

    printf("Enter elements for the array: \n");
    for (i = length; i < (length + addedLength); i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("The array with the added elements: \n");
    for (i = 0; i< length + addedLength; i++){
        printf("%d ", arr[i]);
    }

    // free allocated memory
    free(arr);

    return 0; // Exit the program successfully
}


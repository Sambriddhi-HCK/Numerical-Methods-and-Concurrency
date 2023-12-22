/* 3. Write a program that allocates memoryspace as required by the user for three
arrays. User enters the numbers for two arrays and the program sums the
corresponding array elements and stores them in the third array.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *length;
    int i;

    length = (int *) malloc (sizeof(int));
    if (length == NULL) {
    printf( "Memory allocation for int failed.");
    free(length);
    return 1; //exit the program with an error code   
    }

    printf("Enter the number of element you want to store in the array: ");
    scanf("%d",length);

    int* arr1 = (int*)malloc((*length) * sizeof(int));
    int* arr2 = (int*)malloc((*length) * sizeof(int));
    int* sum = (int*)calloc((*length), sizeof(int));

    if (arr1 == NULL || arr2 == NULL || sum == NULL) {
        printf("Memory allocation for array failed.\n");
        free(arr1); 
        free(arr2);
        free(sum);
        return 1; //exit the program with an error code
    }

    printf("Enter elements for first array: \n");
    for (i = 0; i< *length; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for second array: \n");
    for (i = 0; i< *length; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i< *length; i++){
        sum[i] = arr1[i] + arr2[i];
    }

    printf("The array with the sum of corresponding array elements: ");
    for (i = 0; i< *length; i++){
        printf("%d ", sum[i]);
    }

    printf("\n");

    //deallocate memory
    free(arr1);
    free(arr2);
    free(sum);
    free(length);

    return 0;

}

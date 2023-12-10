#include <stdio.h>

void replace(int [], int);
void replaceWithGivenValue(int [], int, int);

int main(){
    int number, i, replaceValue;
    int array1[50];

    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d", &number);

    for (i = 0; i < number; i++){
        printf("Enter the element %d: ", (i+1));
        scanf("%d", &array1[i]);
    }

    printf("Original arr: ");
    for (i = 0; i < number; i++){
        printf("%d ", array1[i]);
    }
    printf("\n");

    //calling the replace function
    replace(array1, number);

    printf("Replaced with 5: ");
    for (i = 0; i < number; i++){
        printf("%d ", array1[i]);
    }
    printf("\n");

    //prompt user to enter the value to replace
    printf("Enter the value to replace the elements of array with: ");
    scanf("%d", &replaceValue);

    //calling the new function with given value
    replaceWithGivenValue(array1, number, replaceValue);

    printf("Replaced with %d: ", replaceValue);
    for (i = 0; i < number; i++){
        printf("%d ", array1[i]);
    }
    printf("\n");

    return 0;
}

void replace(int array1[], int number){
    for (int i = 0; i < number; i++){
        array1[i] = 5;
    }
}

void replaceWithGivenValue(int array1[], int number, int replaceValue){
    for (int i = 0; i < number; i++){
        array1[i] = replaceValue;
    }
}

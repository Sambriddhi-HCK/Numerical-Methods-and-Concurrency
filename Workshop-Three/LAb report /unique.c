//WAp to print all unique elements in an array
#include <stdio.h>

int main(){
    int number, i;
    int array[50];
    int uniqueArray[50] = {0}; //initialize all elements as 0 (not encountered)

    //prompt user input
    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d", &number);

    for (i = 0; i < number; i++){
        printf("Enter the element %d: ", (i+1));
        scanf("%d", &array[i]);
    }

    // display original array
    printf("Original arr: ");
    for (i = 0; i < number; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

  
    printf("Array with unique elements: \n");

    for (i = 0; i < number; i++) {
        //executes only if the current element is encountered for the first time
        if (!uniqueArray[array[i]]) { //check whether the current element array[i] has been marked as 0 (not encountered) 
            printf("%d ", array[i]);
            uniqueArray[array[i]] = 1; //mark the element as encountered
        }
    }
}
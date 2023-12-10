#include <stdio.h>
#include <stdbool.h>

void found(int [], int, int);

int main() {
    int arr[] ={234,354,342,414,286,304}; //intializing the array
    int valueToCheck;
    int len = sizeof(arr) /sizeof(arr[0]);

    printf("Enter an integer you want to check in the array: ");
    scanf("%d", &valueToCheck);

    found( arr, valueToCheck, len); 
    return 0;
}

void found(int arr[], int valueToCheck, int len){

    bool found = false; //initializing bool found as false

   int indexOfMatch = -1; //initialize to an invalid index

    for (int i = 0; i < len; i++) {
        if (arr[i] == valueToCheck) {
            found = true; //if found then true
            indexOfMatch = i; //store the index of the matched value
            break;
        }
    }

    if (found) {
        printf("Matched at index: %d\n", indexOfMatch);
    } else {
        printf("Element Not Found\n");
    }
}
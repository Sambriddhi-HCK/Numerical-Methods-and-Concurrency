//Write a program to count and find the sum of all the numbers in the array which are exactly divisible by 7 and not divisible by 2 and 3. 
#include <stdio.h>

int main(){
    int i, count = 0 ,sum = 0;
    int arr[] = {7,14,21,28,35,49,61,77};

    int len = sizeof(arr)/sizeof(arr[0]);

    for (i = 0; i<len;i++){
        if(arr[i] % 7 ==0 && arr[i] %2 != 0 && arr[i] %3 != 0){
            count++;
            sum += arr[i];
        }
    }
    printf("The count of numbers in the array which are exactly divisible by 7 and not divisible by 2 and 3 is: %d \n", count);
    printf("The sum of numbers in the array which are exactly divisible by 7 and not divisible by 2 and 3 is: %d", sum);

}
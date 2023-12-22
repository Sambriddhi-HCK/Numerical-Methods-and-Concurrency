/*
1. Write a program in C to take two numbers from the user and print the minimum between two numbers using a pointer. 
int num1, num2;
    printf("Enter two numbers (integers) for the program. \n");
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    if(*ptr1<*ptr2){
        printf("The smaller number is: %d", *ptr1);
    }else{
        printf("The smaller number is: %d", *ptr2);
    }
    return 0;
2. Write a program to count and find the sum of all the numbers in the array, which are exactly divisible by 5 and not divisible by 2 and 3. Assign an array to a pointer. Print out address of pointer, array and first element of an array using “%p” formatter. 
3. Write a program to initialize an integer array with values {20, 15, 87, 71, 24, 34}. Pass this array to a function. Take input from a user to search a number from an array. If element is found, print out its index number and if element is not found then display the message “Element Not found” in the function. 
4. Write a program to read three integers using an array and find the smallest and largest among them. You must write a function for finding the largest and smallest integer and the result must be displayed in the main function itself. You are not allowed to create global variables.

*/
#include <stdio.h>

int main() {
    // Create an array of numbers
    int numbers[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    // Assign the array to a pointer
    int *ptr = numbers;

    // Print the address of the pointer, array, and the first element of the array
    printf("Address of the pointer (ptr): %p\n", (void *)ptr);
    printf("Address of the array (numbers): %p\n", (void *)numbers);
    printf("Address of the first element of the array: %p\n", (void *)(&numbers[0]));

    // Count and find the sum of numbers that are exactly divisible by 5 and not divisible by 2 and 3
    int count = 0;
    int sum = 0;

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        if (numbers[i] % 5 == 0 && numbers[i] % 2 != 0 && numbers[i] % 3 != 0) {
            count++;
            sum += numbers[i];
        }
    }

    // Print the count and sum
    printf("Count of numbers divisible by 5 and not divisible by 2 and 3: %d\n", count);
    printf("Sum of numbers divisible by 5 and not divisible by 2 and 3: %d\n", sum);

    return 0;
}

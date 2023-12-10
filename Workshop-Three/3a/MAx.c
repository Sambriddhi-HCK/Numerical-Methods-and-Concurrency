// #include <stdio.h>

// int main(){
//     int num1, num2;

//     printf("Enter two numbers for the program. \n");
//     printf("Enter number 1: ");
//     scanf("%d", &num1);
//     printf("Enter number 2: ");
//     scanf("%d", &num2);

//     int *ptr1 = &num1;
//     int *ptr2 = &num2;
//     int max;

//     if (*ptr1 > *ptr2){
//         max = *ptr1;
//     }else{
//         max = *ptr2;
//     }
//     printf("The maximum value between %d anf %d is: %d", num1, num2, max);
// }


#include <stdio.h>

int findMax(int *num1, int *num2) {
    if (*num1 > *num2) {
        return *num1;
    } else {
        return *num2;
    }
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    //find the maximum using a pointer
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int max = findMax(ptr1, ptr2);

    printf("The maximum between %d and %d is: %d\n", num1, num2, max);

    return 0;
}

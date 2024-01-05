/*Write a c program to read integers from the user and append the sum to the end in the file
named sum.txt */
#include <stdio.h>

int main(){
    FILE *fptr; // pointer to a FILE structure
    int num,sum =0;
    //open the file
    fptr = fopen("sum.txt","a");
    //checking if the file is created
    if("sum.txt" == NULL){
        printf("Unable to open the file.\n");
        return -1;
    }
    //prompt user to enter integers
    printf("Enter integers to calculate sum(enter non-integer to stop): \n"); 
    while (scanf("%d",&num)==1) //while integer is being entered
    {
        sum += num;
    }
    //append the sum from the above loop to sum.txt
    fprintf(fptr,"Sum of use entered integers: %d\n", sum);
    printf("Sum appended successfully.\n");
    //close the file
    fclose(fptr);

    return 0;
}
/*Write a program in C that takes user input and writes it to a file
named "output.txt". Ensure the program checks for successful
file opening and closing.*/

#include<stdio.h>
int main(){
    FILE *fptr; // fptr is a pointer to a FILE structure
    char input[50];
    fptr = fopen("output.txt","w");
    //check if the file is opened successfully
    if (fptr == NULL) {
        printf("Unable to create file!\n");
        return -1; // exit with an error code
    }

    //take user input
    printf("Enter text to write to the file: ");
    gets(input);

    //write the input to the file
    fputs(input,fptr);

    printf("File written successfully: ");
    //close the file
    fclose(fptr);
    return 0;
}
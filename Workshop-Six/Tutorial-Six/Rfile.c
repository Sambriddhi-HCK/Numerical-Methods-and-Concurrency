/*Develop a C program that reads the contents of a file named
"input.txt" and displays them on the console. Validate file
opening and closing.*/

#include<stdio.h>
int main(){
    FILE *fptr; // fptr is a pointer to a FILE structure
    char ch;;
    fptr = fopen("output.txt","r");
    
    //check if the file is opened successfully
    if (fptr == NULL) {
        printf("File not found!\n");
        return 1; // exit with an error code
    }

    //read file
    printf("Contents of the file:\n");
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }

    //close the file
    fclose(fptr);
    return 0;
}
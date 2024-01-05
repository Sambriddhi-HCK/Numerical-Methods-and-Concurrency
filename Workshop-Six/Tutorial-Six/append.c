/*4. WAP that appends user-provided text to an existing file named
"existing.txt". Implement necessary file handling procedures.*/

#include<stdio.h>

int main(){
    FILE *fptr;
    char input[50];
    fptr = fopen("existing.txt","a");
    if(fptr==NULL){
        printf("Unable to create file.");
        fclose(fptr); //close the input file before exiting
        return -1; 
    }
    //take user input
    printf("Enter text to append to the file: ");
    fgets(input, sizeof(input), stdin);

    //write the input to the file
    fputs(input,fptr);

    printf("File appended successfully: ");
}
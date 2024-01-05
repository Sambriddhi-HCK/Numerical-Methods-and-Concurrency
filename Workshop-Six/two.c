/*Write a program to copy content from employee. txt. File to newemployee.txt file.*/

#include <stdio.h>

int main(){
    FILE *fptr,*copyptr;
    char line[100];

    //employee.txt
    fptr = fopen("/Users/sambriddhi/Downloads/Year2/sem-III/C-programming/Workshop/employee.txt","r");
    if(fptr==NULL){
        printf("Unable to open the file.");
        fclose(fptr); //close the input file before exiting
        return -1; 
    }

    //newemployee.txt
    copyptr = fopen("newemployee.txt","w");
    if(copyptr==NULL){
        printf("Unable to open the file.");
        fclose(copyptr); //close the input file before exiting
        return -1; 
    }
    while(fgets(line,sizeof(line),fptr)!=NULL){
        fputs(line,copyptr);
    }
    fclose(fptr);
    fclose(copyptr);

    printf("Content copied successfully from employee.txt to newemployee.txt.\n");

    return 0;
}
//read employee.txt
#include <stdio.h>

int main(){
    FILE *fptr;
    char line[100];

    //employee.txt
    fptr = fopen("/Users/sambriddhi/Downloads/Year2/sem-III/C-programming/Workshop/employee.txt","r");
    if(fptr==NULL){
        printf("Unable to open the file.");
        fclose(fptr); //close the input file before exiting
        return -1; 
    }
    while(fgets(line,sizeof(line),fptr)!=NULL){
        printf("%s",line);
    }
    fclose(fptr);
}
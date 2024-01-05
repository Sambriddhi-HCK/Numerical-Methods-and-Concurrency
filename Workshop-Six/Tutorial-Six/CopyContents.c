/*3. Create a program in C that copies the contents of "input.txt" to
"output.txt". Ensure proper handling of file opening and closing.*/
#include<stdio.h>
int main(){
    FILE *inputfptr, *outputfptr; //pointer to a file structure
    char ch;
    char input[50];

    inputfptr = fopen("input.txt","r");
    //open file input.txt in read mode
    if(inputfptr == NULL){
        printf("Error Opening input.txt!\n");
        return 1;//exit with an error code
    }

    outputfptr = fopen("output.txt","w");
    if (outputfptr == NULL) {
        printf("Unable to create file\n");
        fclose(inputfptr); //close the input file before exiting
        return 1; //exit with an error code
    }

    //copy contents from input.txt to output.txt
    while ((ch = fgetc(inputfptr)) != EOF) {
        fputc(ch, outputfptr);
    }
    
    printf("File copied successfully: ");

    
    //close the files
    fclose(inputfptr);
    fclose(outputfptr);
}
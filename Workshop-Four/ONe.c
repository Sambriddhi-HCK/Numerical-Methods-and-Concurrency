//C program to create memory for int, char and float variables at run time.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *intVariable;
    char * charVariable;
    float * floatVariable;

    intVariable = (int *) malloc (sizeof(int));
    if (intVariable == NULL) {
    printf( "Memorv allocation for int failed. \n");
    free(intVariable);
    return 1; //exit the program with an error code   
    }

    charVariable = (char *) malloc (sizeof(char));
    if (charVariable == NULL) {
    printf( "Memory allocation for char failed. \n");
    free(charVariable);
    return 1; //exit the program with an error code   
    }

    floatVariable = (float *) malloc (sizeof(float));
    if (floatVariable == NULL) {
    printf( "Memory allocation for float failed. \n");
    free(floatVariable);
    return 1; //exit the program with an error code   
    }

    //assigning value
    *intVariable = 22;
    *charVariable = 's';
    *floatVariable = 23.33f;

    printf("The int value: %d \n", *intVariable);
    printf("The char value: %c\n", *charVariable);
    printf("The float value: %f\n", *floatVariable);

    free(intVariable);
    free(charVariable);
    free(floatVariable);

    return 0;
}
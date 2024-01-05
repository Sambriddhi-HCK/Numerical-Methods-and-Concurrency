//Write a program to copy content from odd.txt and even.txt file to a new file numbers.txt file.

#include<stdio.h>

int main() {
    FILE *oddFile = fopen("odd.txt", "r");
    FILE *evenFile = fopen("even.txt", "r");
    FILE *numbersFile = fopen("numbers.txt", "w");

    if (oddFile == NULL || evenFile == NULL || numbersFile == NULL) {
        printf("Unable to open the file(s) for reading or writing.\n");
        return -1;
    }

    // Copy content from odd.txt to numbers.txt
    int number;
    while (fscanf(oddFile, "%d", &number) == 1){
        // Read integers until the end of the file
        fprintf(numbersFile, "%d ", number);
    }

    // Copy content from even.txt to numbers.txt
    while (fscanf(evenFile, "%d", &number) == 1){
        // Read integers until the end of the file
        fprintf(numbersFile, "%d ", number);
    }

    printf("Content copied successfully to numbers.txt.\n");

    fclose(oddFile);
    fclose(evenFile);
    fclose(numbersFile);

    return 0;
}

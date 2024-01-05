/*Write a program in C to read integers from the user until the user says "no". After
reading the data write all the odd numbers to a file named odd.txt and all the
even numbers to file even.txt.
*/
#include<stdio.h>
#include <string.h>

int main(){
    char choice[3];//yes or no 
    int integer;

    FILE *evenFile = fopen("even.txt","w");
    FILE *oddFile = fopen("odd.txt","w");

    if (oddFile == NULL || evenFile == NULL) {
        printf("Unable to open the file for writing.\n");
        return -1;
    }
    do
    {
        printf("Enter an integer: ");
        scanf("%d",&integer);  

        if(integer % 2 == 0){
            fprintf(evenFile,"%d\n",integer);
        }else{
            fprintf(oddFile,"%d\n",integer);

        }
        printf("Do you want to enter another number? (yes/no): ");
        scanf("%s",choice);

    } while (strcmp(choice,"no") !=0);
    
    printf("Numbers identified and added to respective files successfully.\n");
    fclose(evenFile);
    fclose(oddFile);
    return 0;
}
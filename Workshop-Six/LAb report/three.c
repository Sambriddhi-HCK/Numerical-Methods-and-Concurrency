//WAP to add new employee details in employee.txt file.
#include <stdio.h>

struct Employee{
    char empName[20];
    int age;
    float salary;
};


int main(){
    FILE *fptr;
    int num;

    //open file in append mode
    fptr = fopen("/Users/sambriddhi/Downloads/Year2/sem-III/C-programming/Workshop/employee.txt","a");
    if(fptr==NULL){
        printf("Unable to open the file.");
        fclose(fptr); //close the input file before exiting
        return -1; 
    }

    //number of employees
    printf("Enter the number of employees to add information of: ");
    scanf("%d",&num);
    struct Employee employees[num];

    printf("Enter information for: \n");
    for (int i = 0; i<num;i++){
        printf("Employee %d: \n", i+1);
        printf("Enter name: ");
        scanf("%s", employees[i].empName);
        printf("Enter age: ");
        scanf("%d", &employees[i].age);
        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);
        printf("\n");

        //write employee information to file
        fprintf(fptr, "Employee Name: %s\n", employees[i].empName);
        fprintf(fptr, "Age: %d\n", employees[i].age);
        fprintf(fptr, "Salary: %.2f\n", employees[i].salary);
        fprintf(fptr, "\n");
    }

    fclose(fptr);
    return 0;
}
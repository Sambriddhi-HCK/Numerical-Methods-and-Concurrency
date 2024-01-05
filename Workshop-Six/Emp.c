/*Create a structure named employee having members: empName, age and
salary. Use this structure to read the name, age and salary of the 5 employees
and write entered information to a file employee.txt in D:\ drive.*/
#include <stdio.h>

struct Employee
{
    char empName[20];
    int age;
    float salary;
};

int main(){
    FILE *fptr;
    struct Employee employees[5];

    fptr = fopen("/Users/sambriddhi/Downloads/Year2/sem-III/C-programming/Workshop/employee.txt","w");
    if(fptr==NULL){
        printf("Unable to open the file.");
        fclose(fptr); //close the input file before exiting
        return -1; 
    }

    printf("Enter information for: \n");
    for (int i =0; i<5; i++ ){
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
    printf("Employee information written to employee.txt successfully.");
    fclose(fptr);
    return 0;
}

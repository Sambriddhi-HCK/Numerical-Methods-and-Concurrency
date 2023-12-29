/*Write a structure to store the names, salary and hours of work per day of 5 employees in a company.
 Write a program to increase the salary depending on the number of hours of work per day as
follows and then print the name of all the employees along with their final salaries.

Hours:                  8       10       >=12
Increase in salary:     $50     $100     $150
*/
#include <stdio.h>

struct Employees {
    char name[20];
    float salary;
    int hours;
};
int main(){
    struct Employees employee[5];
    // prompting user to enter information for the 5 employees
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter information for employee %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", employee[i].name);
        printf("Enter hours of work per day: ");
        scanf("%d", &employee[i].hours);
        printf("Enter salary: ");
        scanf("%f", &employee[i].salary);
    }

    for (int i = 0;i < 5; i++ ){
        if(employee->hours==8){
            employee->salary += 50; 
        }else if (employee->hours==10){
            employee->salary += 100; 
        }else if (employee->hours>=12){
            employee->salary += 150; 
        }  
    }
    for (int i = 0;i < 5; i++ ){
        printf("Employee name: %s\nFinal Salary: %f\n", employee[i].name, employee[i].salary);
    }
}
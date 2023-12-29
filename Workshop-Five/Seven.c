/*Create a structure named Employee having members name,salary and hours of work per day.
Now, write a program to dynamically create an ‘n’ number of structures of type Employee. 
Pass this array of structure to a function that prints the highest salary of the employee.*/

#include <stdio.h>
#include <stdlib.h>
struct Employees {
    char name[20];
    float salary;
    int hours; //hours of work per day
};
void printHighestSalary(int, struct Employees *);
int main(){
    int n; //number of structures of type Employee
    printf("Enter the number of structures you want for structure : ");
    scanf("%d", &n);

    //data type struct Employees
    struct Employees *arrOfStr = (struct Employees*) malloc(n * sizeof(struct Employees));
    if (arrOfStr == NULL){
        printf("Memory allocation failed for array");
        free(arrOfStr); //free memory space
        return 1; //exit with error code
    }
    //read employee information
    for (int i = 0; i < n; i++) {
        printf("Enter information for employee %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", arrOfStr[i].name);
        printf("Enter salary: ");
        scanf("%f", &arrOfStr[i].salary);
        printf("Enter hours of work per day: ");
        scanf("%d", &arrOfStr[i].hours);
    }
    printHighestSalary(n,arrOfStr);
    free(arrOfStr); // free memory space
    return 0;
}

void printHighestSalary(int length,struct Employees arr[]){
    if (length <= 0) {
        printf("Invalid length!!\n");
        return;
    }

    int temp = 0, highest = 0;
    for (int i = 0; i< length; i++){
        if (temp<arr[i].salary){
            temp = arr[i].salary;
            highest = i;
        }
    }
    printf("The highest salary is: %.2f of %s.", arr[highest].salary,arr[highest].name);
}


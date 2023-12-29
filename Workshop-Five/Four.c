/*
WAP to input name, post and salary of ten employees from main() function and pass to structure 
type user defined function(argument of this function should also be a structure type). This function returns a structure 
variable which keeps the record of only those employees whose salary is greater than 10,000. 
This modified record is also displayed from the main() function.*/

#include <stdio.h>
#include <stdlib.h>

struct Employees
{
    char name[20];
    char post[20];
    float salary;
};

// function prototype
struct Employees *filterEmployees(struct Employees[], int, int *);

int main()
{
    struct Employees employee[10];

    // prompting user to enter information for the 10 employees
    int arrSize = 10;
    for (int i = 0; i < arrSize; i++)
    {
        printf("\nEnter information for: ");
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", employee[i].name);
        printf("Enter post: ");
        scanf("%s", employee[i].post);
        printf("Enter salary: ");
        scanf("%f", &employee[i].salary);
    }

    int filteredSize = 0;

    // call the function to filter employees with salary greater than 10,000
    struct Employees *filteredEmployees = filterEmployees(employee, arrSize, &filteredSize);

    // display the filtered employees
    printf("\nEmployees with Salary > 10,000:\n");
    for (int i = 0; i < filteredSize; i++)
    {
        printf("Name: %s\nPost: %s\nSalary: %.2f\n", filteredEmployees[i].name, filteredEmployees[i].post, filteredEmployees[i].salary);
    }

    return 0;
}

// function to filter employees with salary greater than 10,000
struct Employees *filterEmployees(struct Employees employee[], int size, int *filteredSize)
{
    struct Employees *filteredEmployees = (struct Employees *)malloc(size * sizeof(struct Employees));
    int k = 0; // count of filtered employees

    for (int i = 0; i < size; i++)
    {
        if (employee[i].salary > 10000)
        {
            // storing the information of employees with salary greater than 10,000
            filteredEmployees[k] = employee[i];
            k++;
        }
    }
    *filteredSize = k;
    return filteredEmployees;
}


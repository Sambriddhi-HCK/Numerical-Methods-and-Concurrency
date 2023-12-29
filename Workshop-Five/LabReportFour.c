/*Create a structure name Student and inside that struct include two data members' roll no and marks,inside that struct student 
definition create another struct named student_info where you should include three data members' name, age, and date of birth 
and print it out for 3 students.*/

#include <stdio.h>

struct Student
{
    int roll_no;
    float marks;
    struct StudentInfo{
        char name[20];
        int age;
        char dob[10];
    }info;
};

int main(){
    //create an array of structure to store information for 3 students
    struct Student students[3];
    //input data for 3 students
    for (int i = 0; i < 3; i++) {
        printf("Enter information for student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].info.name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter age: ");
        scanf("%d", &students[i].info.age);

        printf("Enter date of birth: ");
        scanf("%s", students[i].info.dob);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    //display the information for 3 students
    for (int i = 0; i < 3; i++) {
        printf("\nInformation of Student %d:\n", i+1);
        printf("Name: %s\n", students[i].info.name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Age: %d\n", students[i].info.age);
        printf("Date of Birth: %s\n", students[i].info.dob);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;

}
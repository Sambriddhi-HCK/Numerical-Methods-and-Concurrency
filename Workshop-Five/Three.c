/*
Create a structure named student that has a name, roll number and marks as members.
 Assume appropriate types and size of members. Use this structure to read and display records of 10 students. 
Create two functions: One is to read information of students and other to display the information.*/

#include <stdio.h>

struct Student
{
    char name[20];
    int roll_no;
    float marks;
};

struct Student readInfo();
void displayInfo(struct Student);

int main(){
    struct Student student[10];

    //reading information of 10 students
    for (int i=0; i<10; i++ ){
        printf("\nEnter information for student %d:\n", i + 1);
        student[i] = readInfo();
    }

    for (int i=0; i<10; i++ ){
        displayInfo(student[i]);
    }
    return 0;
}

// Function to read information for a student
struct Student readInfo(){
    struct Student student;

    printf("Enter name: " );
    scanf("%s", student.name);
    printf("Enter roll_no: " );
    scanf("%d", &student.roll_no);
    printf("Enter marks: " );
    scanf("%f", &student.marks);

    printf ("\n");
    return student;
}

void displayInfo(struct Student student){
    
    printf("\nStudent Information\n");
    printf("Name: %s\nRoll Number: %d\nMarks: %.2f\n", student.name, student.roll_no, student.marks);
}
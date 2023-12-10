#include <stdio.h>

/* 3. Write a void function which takes one integer (n) as a parameter. Your function should
then print out all triangular numbers from 1 up to the nth term
*/
//function prototype
int triangleNum(int );

//main function 
int main(){
    int tNum;
    printf("Enter a number: ");
    scanf("%d",&tNum);
    triangleNum(tNum);
    return 0;
}

int triangleNum(int num){
    int i,triangleNumber = 0;
    printf("Triangular numbers from 1 to %dth term: ",num);
    for (i =1; i<=num;i++){
         triangleNumber += i ;
        printf("%d ", triangleNumber);
    }
    return 0;
}
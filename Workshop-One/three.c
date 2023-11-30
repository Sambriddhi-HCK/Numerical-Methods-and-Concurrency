#include<stdio.h>
int main(){
    int i,num,triangleNumber = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Triangular numbers from 1 to %dth term:",num);
    for (i =1; i<=num;i++){
         triangleNumber += i ;
        printf("%d ", triangleNumber);
    }

}
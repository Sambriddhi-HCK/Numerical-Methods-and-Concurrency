#include<stdio.h>

/*1
Write a void function which finds and prints the midpoint coordinates of a line. 
The function should take in four parameters (x1, y1, x2 and y2)
xmid=(x1+x2)/2, ymid=(y1+y2)/2
*/
//fuction prototype
void midPoint(float,float,float,float);

int main(){
    float x1, x2, y1, y2;

    printf("To find the midpoint coordinates of a line:\n Enter the value of x1: ");
    scanf("%f",&x1);
    printf("Enter the value of y1: ");
    scanf("%f",&y1);
    printf("Enter the value of x2: ");
    scanf("%f",&x2);
    printf("Enter the value of y2: ");
    scanf("%f",&y2); 

    midPoint(x1,y1,x2,y2);
    return 0;
}

void midPoint(float x1,float x2,float y1,float y2){
    float xmid = (x1 + x2 )/ 2 ;
    float ymid = (y1 + y2) / 2;

    printf("The mid point coordinates of the line is: (%.2f, %.2f)", xmid,ymid);
}

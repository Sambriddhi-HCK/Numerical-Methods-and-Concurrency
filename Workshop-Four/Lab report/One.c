#include <stdio.h> //header file
//main function
int main(){
	int length; // declaring variable length to store the number of elements in an array
	int arr[length]; // declaring an integer array with elements number of elements 
	printf("Enter the number of elements to store in array: ");
	scanf("%d",&length);
	
	for(int i=0; i<length; i++){
		printf("Enter the element %d: ", i+1);
		scanf("%d",&arr[i]);
	}
	
	int *p= &arr[0];
    int sum = 0;
	for(int i=0; i<length; i++){

        sum += *p;
		p++;
	}
    printf("The sum of elements of the array: %d", sum);
	return 0;
}

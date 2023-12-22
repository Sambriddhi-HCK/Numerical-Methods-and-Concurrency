// Write a program in C to check whether two given strings are an anagram.

#include <stdio.h>
int anagram(char [], char []);//declaring function that takes two character parameter

int main(){//main function
	char a[100], b[100];//declaring two string variables, where they are stored in an array, where the array will allow you to store 100 characters from index 0 to 99
    int flag;//declaring variable flag to store two string entered by the user
 
    printf("Enter the string\n");//asking user to enter first string i.e. a
    scanf("%s",&a);//user input to enter a first string i.e. a
    printf("Enter another string\n");//asking user to enter second string i.e. b
    scanf("%s",&b);//user input to enter a second string i.e b
    flag = anagram(a, b);
    if (flag == 1){
        printf("%s and %s are anagrams.\n", a, b);//displays if the entered strings are anagrams
    }else{
        printf("%s and %s are not anagrams.\n", a, b);//displays if the entered strings are not anagrams
    }
    return 0;
}
//function definition
int anagram(char a[], char b[]){
	//default value assigned to zero
    int num1[26] = {0}, num2[26] = {0}, i = 0;
    //while statement is used to sort both the array 
    while (a[i] != '\0')
    {
        num1[a[i] - 'a']++;
        i++;
    }
    i = 0;
    while (b[i] != '\0')
    {
        num2[b[i] -'a']++;
        i++;
    }
    //comparing both the array using for loop
    //if both string are equal than they are anagrams otherwise they are not anagrams
    for (i = 0; i < 26; i++)
    {
        if (num1[i] != num2[i])
            return 0;
    }
    return 1;
}

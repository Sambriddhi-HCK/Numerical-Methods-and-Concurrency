#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    // to check if it is in uppercase or not
    if (ch>='A' && ch<='Z'){
        printf("Converted to lowercase: %c",ch + 32);
    }
    else{
        printf("Converted to uppercase:%c", ch - 32);
    }
    return 0;
}
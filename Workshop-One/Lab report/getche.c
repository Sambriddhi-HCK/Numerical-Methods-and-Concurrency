#include<stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");

    // Use %c to read a single character
    ch = getche();

    while(ch!=13){
    // Check if it is in uppercase or not
    if (ch >= 'A' && ch <= 'Z') {
        // Convert to lowercase by adding 32 to the ASCII value
        printf("Converted to lowercase: %c\n", ch + 32);
    } else {
        // If lowercase, 
        printf("lowercase: %c\n", ch);
    }
    printf("Enter a character again: ");

    ch = getche();
    }

    return 0;
}

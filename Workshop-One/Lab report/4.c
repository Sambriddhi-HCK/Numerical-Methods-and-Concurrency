#include<stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");

    // Use %c to read a single character
    // ch=getche();
    scanf(" %c ", &ch);

    // Check if enter key is pressed
    if (ch == '\n') {
        printf("Enter key pressed. Exiting.\n");
        return 0;
    }

    // Check if it is in uppercase or not
    if (ch >= 'A' && ch <= 'Z') {
        // Convert to lowercase by adding 32 to the ASCII value
        printf("Converted to lowercase: %c\n", ch + 32);
    } else {
        // If lowercase, print as it is
        printf("Entered lowercase character: %c\n", ch);
    }

    return 0;
}

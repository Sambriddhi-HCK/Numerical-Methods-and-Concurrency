#include <stdio.h>

int main() {
    int sum = 0, i;

    for (i = 1; i <= 10; i++) {
        sum = sum + i; 
    }

    printf("The sum from 1 to 10 is: %d", sum);

    return 0;
}

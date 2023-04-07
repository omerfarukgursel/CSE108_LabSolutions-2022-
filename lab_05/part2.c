#include <stdio.h>

int main() {
    int number, reversed_number = 0, digit_count = 0, remainder;

    printf("Enter a number (3, 4, or 5): ");
    scanf("%d", &number);

    remainder = number;
    while(remainder != 0) {
        digit_count++;
        remainder=remainder/ 10;
    }

    switch(digit_count) {
        case 3:
        case 4:
        case 5:
            while(number != 0) {
                reversed_number = reversed_number * 10 + number % 10;
                number=number/ 10;
            }
            printf("Reversed number: %d\n", reversed_number);
            break;
        default:
            printf("Invalid number of digits.\n");
    }

    return 0;
}







#include <stdio.h>
#include <stdlib.h>

void decimalbinary(int decimal);
void decimaloctal(int decimal);
void decimalhexadecimal(int decimal);

int main() {
    int choice, number;
      do{
        printf("Menu:\n");
        printf("1. Convert a number to decimal, binary, octal, and hexadecimal\n");
        printf("2. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    
        switch(choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Decimal equivalent: %d\n", number);
                printf("Binary equivalent: ");
                decimalbinary(number);
                printf("\nOctal equivalent: ");
                decimaloctal(number);
                printf("\nHexadecimal equivalent: ");
                decimalhexadecimal(number);
                printf("\n");
                break;
            case 2:
                printf("goodbye");
                return 0;
            default:
                printf("Invalid choice\n");
        }
      }while (choice != 2);

    return 0;
}

void decimalbinary(int decimal) {
    int binary[32], i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

void decimaloctal(int decimal) {
    int octal[32], i = 0;

    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
}

void decimalhexadecimal(int decimal) {
    char hexadecimal[32];
    int i = 0;

    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder + 55;
        }
        decimal /= 16;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
}

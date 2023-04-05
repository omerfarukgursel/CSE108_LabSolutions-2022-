#include <stdio.h>

int main() {
    char operator;
    int num1,num2,result,answer;

    printf("Enter an arithmetic operation (+, -, *, /): ");
    scanf("%c",&operator);

    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    switch (operator) {
        case '+':
            result =num1+num2;
            break;
        case '-':
            result=num1-num2;
            break;
        case '*':
            result=num1*num2;
            break;
        case '/':
            result=num1/num2;
            break;
        default:
            printf("Invalid operator\n");
            return 0;
    }

    printf("Result: ");
    scanf("%d", &answer);

    printf("Result: %d\n", result);

    if (answer == result) {
        printf("Bravo, correct answer!\n");
    } else {
        printf("Wrong answer, try again.\n");
    }

    return 0;
}
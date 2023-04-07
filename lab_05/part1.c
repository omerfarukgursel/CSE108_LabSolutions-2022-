#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    return (celsius*9.0/5.0)+32.0;
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit-32.0)*5.0/9.0;
}

int main() {
    int choice;
    float temperature, converted_temperature;
    
        printf("Temperature Conversion Menu\n");
        printf("1. Convert Celsius to Fahrenheit\n");
        printf("2. Convert Fahrenheit to Celsius\n");
        printf("3. Quit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the temperature value to convert: ");
                scanf("%f", &temperature);
                converted_temperature = celsius_to_fahrenheit(temperature);
                printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, converted_temperature);
                break;
            case 2:
                printf("Enter the temperature value to convert: ");
                scanf("%f", &temperature);
                converted_temperature = fahrenheit_to_celsius(temperature);
                printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, converted_temperature);
                break;
            case 3:
                printf("Goodbye...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
     while (choice != 3);
    return 0;
}
#include <stdio.h>

int main (){

    int median,a,b,c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (b > c) {
            median = b;
        } else if (a > c) {
            median = c;
        } else {
            median = a;
        }
    } else {
        if (a > c) {
            median = a;
        } else if (b > c) {
            median = c;
        } else {
            median = b;
        }
    }

    printf("Median: %d\n", median);
    return 0;
}
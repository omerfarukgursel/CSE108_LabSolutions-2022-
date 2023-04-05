#include <stdio.h>

int main() {
    float score1,score2,score3,average;
    char grade1,grade1a,grade2,grade2a,grade3,grade3a;

    printf("Enter score 1: ");
    scanf("%f", &score1);
    printf("Enter score 2: ");
    scanf("%f", &score2);
    printf("Enter score 3: ");
    scanf("%f", &score3);
    average=(score1 + score2 + score3)/3;
     //calculating grade 1
    switch((int) score1/10) {
        case 10:
        case 9:
            grade1 = 'A';
            break;
        case 8:
            grade1 = 'A';
            break;
        case 7:
            grade1 = 'B';
            break;
        case 6:
            grade1 = 'B';
            break;
        case 5:
            grade1 = 'C';
            break;
        case 4:
            grade1 = 'D';
            break;
        default:
            grade1 = 'F';
            break;
    }

        switch((int) score1/10) {
        case 10:
        case 9:
            grade1a = '+';
            break;
        case 8:
            grade1a = '\0';
            break;
        case 7:
            grade1a = '+';
            break;
        case 6:
            grade1a = '\0';
            break;
        case 5:
            grade1a = '\0';
            break;
        case 4:
            grade1a = '\0';
            break;
        default:
            grade1a = '\0';
            break;
    }
    
    //calculating grade 2
    switch((int) score2/10) {
        case 10:
        case 9:
            grade2 = 'A';
            break;
        case 8:
            grade2 = 'A';
            break;
        case 7:
            grade2 = 'B';
            break;
        case 6:
            grade2 = 'B';
            break;
        case 5:
            grade2 = 'C';
            break;
        case 4:
            grade2 = 'D';
            break;
        default:
            grade2 = 'F';
            break;
    }

    switch((int) score2/10) {
        case 10:
        case 9:
            grade2a = '+';
            break;
        case 8:
            grade2a = '\0';
            break;
        case 7:
            grade2a = '+';
            break;
        case 6:
            grade2a = '\0';
            break;
        case 5:
            grade2a = '\0';
            break;
        case 4:
            grade2a = '\0';
            break;
        default:
            grade2a = '\0';
            break;
    }
 
    //calculating grde 3
    switch((int) score3/10) {
        case 10:
        case 9:
            grade3 = 'A';
            break;
        case 8:
            grade3 = 'A';
            break;
        case 7:
            grade3 = 'B';
            break;
        case 6:
            grade3 = 'B';
            break;
        case 5:
            grade3 = 'C';
            break;
        case 4:
            grade3 = 'D';
            break;
        default:
            grade3 = 'F';
            break;
    }

    switch((int) score3/10) {
        case 10:
        case 9:
            grade3a = '+';
            break;
        case 8:
            grade3a = '\0';
            break;
        case 7:
            grade3a = '+';
            break;
        case 6:
            grade3a = '\0';
            break;
        case 5:
            grade3a = '\0';
            break;
        case 4:
            grade3a = '\0';
            break;
        default:
            grade3a = '\0';
            break;
    }

    printf("Your letter grades are %c%c, %c%c and %c%c with an %.1f average.",grade1,grade1a,grade2,grade2a,grade3,grade3a,average);

    return 0;
}
#include<stdio.h>

int main(){
    float kg,m,bmi;
    printf("enter the weight kg: ");
    scanf("%f",&kg);
    printf("enter the height m: ");
    scanf("%f",&m);
    bmi=(kg/(m*m));
    printf("bmi = %.2f",bmi);
    if (bmi<=18.5)
    {
        printf(" underweight");
    }
    if (bmi>18.5 && bmi<=25){
    
         printf(" average weight");
    }
    if(bmi>25 && bmi <=30)
    {
        printf (" overweight");
    }
    if(bmi>30)
    {
        printf(" obese");
    }
    return 0;
}
#include<stdio.h>

int main ()
{
    float x,y,z,a;

    printf("enter x value:");
    scanf("%f",&x);

    printf("enter y value:");
    scanf("%f",&y);
    
    if (x>=y){
        a=x;
    }
    else{
        a=y;
    }
    z= x/y + a/(x+y);
    printf("%f",z);
    return 0;

}
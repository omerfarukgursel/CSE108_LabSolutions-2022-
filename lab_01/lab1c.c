#include<stdio.h>

int main()
{
    int age, exp;
    printf("enter age:");
    scanf("%d",&age);

    printf("enter experience year:");
    scanf("%d",&exp);

    if (age<20 && exp<=10){
        printf("your salary = 10000");
    }
    if (age>=20 && age<50 && exp<=10){
        printf("your salary = 15000");
    }
  if (age>=20 && age<50 && exp>10){
        printf("your salary = 20000");
    }
  if (age>=50 && exp<=10){
        printf("your salary = 20000");
    }
if (age>=50 && exp>10){
        printf("your salary = 25000");
    }
}
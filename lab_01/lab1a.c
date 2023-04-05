#include<stdio.h>

int main ()
 {
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    if(a%3==0){
    printf("Fizz");
   }
       if (a<=50 && a>=5 ){
       printf("Buzz");
   }
   return 0;
 }
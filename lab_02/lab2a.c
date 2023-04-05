#include<stdio.h>
#include<math.h>

int main (){
    float c,carea,cvol,lrp,wrp,hrp,rparea,rpvol,rs,rsarea,rsvol,rc,hc,rcarea,rcvol,b,x;
    
    printf("Enter the edge length for cube: ");
    scanf("%f",&c);
    carea=6*c*c;
    cvol=c*c*c;
    printf("Surface Area = %.2f, Volume = %.2f\n\n",carea,cvol);

    printf("Enter side length for rectangular prism: ");
    scanf("%f",&lrp);
    printf("Enter side width: ");
    scanf("%f",&wrp);
    printf("Enter side height: ");
    scanf("%f",&hrp);
    rparea=2*(lrp*wrp+lrp*hrp+wrp*hrp);
    rpvol=lrp*wrp*hrp;
    printf("Surface Area = %.2f, Volume = %.2f\n\n",rparea,rpvol);

    printf("Enter the radius for sphere: ");
    scanf("%f",&rs);
    rsarea=4*3.14*rs*rs;
    rsvol=(4*(3.14*rs*rs*rs))/3;
    printf("Surface Area = %.2f, Volume = %.2f\n\n",rsarea,rsvol);

    printf("Enter the radius for cone: ");
    scanf("%f",&rc);
    printf("Enter the height: ");
    scanf("%f",&hc);
    x=rc*rc+hc*hc;
    b=sqrt(x);
    rcarea=3.14*rc*(rc+b);
    rcvol=(3.14*rc*hc*rc)/3;
    printf("Surface Area = %.2f, Volume = %.2f\n\n",rcarea,rcvol);
    return 0;

}
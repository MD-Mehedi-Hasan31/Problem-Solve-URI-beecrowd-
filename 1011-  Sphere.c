#include<stdio.h>

 int main(){

    double d,s,pi,area,r;
    scanf("%lf",&r);
    d=(4.0/3);
    pi=3.14159;
    s=(r*r*r);

    area=(d*pi*s);
    printf("VOLUME = %0.3lf\n",area);

    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,d,e;
    float c,f,A,B,D;

    scanf("%d %d %f",&a,&b,&c);
    scanf("%d %d %f",&d,&e,&f);

    A=(c*b);
    B=(f*e);
    D=A+B;

    printf("VALOR A PAGAR: R$ %0.2f\n",D);

    return 0;
}

#include<stdio.h>

int main()
{
    float a,b,c,value,num;

    scanf("%f %f %f",&a,&b,&c);

    if(a+b>c  && b+c>a && c+a>b)
    {
        num=(a+b+c);
        printf("Perimetro = %.1f\n",num);
    }
    else
    {
        value=((a+b)*c/2);
        printf("Area = %0.1f\n",value);

    }
    return 0;
}

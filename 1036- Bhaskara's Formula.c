#include<stdio.h>
#include<math.h>

 int main(){

    double value,value1,a,b,c,x1,x2;

    scanf("%lf %lf %lf",&a,&b,&c);

    value=((b*b)-(4*(a)*(c)));

        if(value>0 && a!=0){

            value1=sqrt(value);

            x1=((-b+value1)/(2*a));

            x2=((-b-value1)/(2*a));

        printf("R1 = %0.5lf\n",x1);
        printf("R2 = %0.5lf\n",x2);
        }

    else{

        printf("Impossivel calcular\n");
    }

    return 0;
 }

#include<stdio.h>
#include<string.h>
 int main(){

    char s[50];

    double bs,ps,inr,sum;

    scanf("%s",s);
    scanf("%lf %lf",&bs,&ps);

    inr=(ps*0.15);

    sum=bs+inr;
    printf("TOTAL = R$ %0.2lf\n",sum);

    return 0;
 }

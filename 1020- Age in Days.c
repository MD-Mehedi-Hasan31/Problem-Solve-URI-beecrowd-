#include<stdio.h>

 int main(){
    int a,b,c,d,f;

    scanf("%d",&a);

    b=a/365;
    c=a%365;
    d=c/30;
    f=c%30;

    printf("%d ano(s)\n",b);
    printf("%d mes(es)\n",d);
    printf("%d dia(s)\n",f);

    return 0;
 }

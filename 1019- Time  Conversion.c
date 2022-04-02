#include<stdio.h>
int main(){

    int a,b,c,d,e;

    scanf("%d",&a);

    e=a/3600;

    b=a%3600;
    d=b/60;

    c=b%60;

    printf("%d:%d:%d",e,d,c);

    return 0;




}

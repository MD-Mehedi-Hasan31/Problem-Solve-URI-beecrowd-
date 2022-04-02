#include<stdio.h>

 int main(){
        int a,b,c,d;

        scanf("%d %d",&a,&b);

        if(a>b){
                c=24-a;
                d=c+b;
                printf("O JOGO DUROU %d HORA(S)\n",d);

        }
        else if(a==b){
                printf("O JOGO DUROU 24 HORA(S)\n");

        }
        else if(a<b){
                c=b-a;
                printf("O JOGO DUROU %d HORA(S)\n",c);

        }

    return 0;

 }

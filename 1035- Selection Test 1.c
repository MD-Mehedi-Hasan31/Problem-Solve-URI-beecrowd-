#include<stdio.h>

int main(){
    int e,f, A,B,C,D;

    scanf("%d %d %d %d",&A,&B,&C,&D);

    e=C+D;
    f=A+B;

    if(B>C&&D>A&&e>f&&C>=0&&D>=0&&A%2==0){

    printf("Valores aceitos\n");
    }

    else{
        printf("Valores nao aceitos\n");
    }

    return 0;


}

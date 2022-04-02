#include<stdio.h>

 int main(){

        int temp,j,i,n=3,ara[3],ara1[3];

        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);

            ara1[i]=ara[i];

        }

        printf("\n");
        for(j=0;j<n-1;j++){

            for(i=0;i<n-j-1;i++){

                if(ara[i]>ara[i+1]){
                        temp=ara[i];
                        ara[i]=ara[i+1];
                        ara[i+1]=temp;

                }

        }

        }


        for(i=0;i<n;i++){
                printf("%d\n",ara[i]);

        }



            printf("\n");
        for(j=0;j<n;j++){
           printf("%d\n",ara1[j]);
        }


    return 0;

 }

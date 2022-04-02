#include<stdio.h>

int main()
{

    double e,a,b,c,d,f,value;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    e=((a * 2 + b * 3 + c * 4 + d * 1) / 10);

    printf("Media: %0.1lf\n", e);

    if(e >= 7.0)
    {

    printf("Aluno aprovado.\n");
    }
   else if(e >= 5.0 )
    {

        printf("Aluno em exame.\n");
        scanf("%lf", &f);


        printf("Nota do exame: %0.1lf\n", f);

        if( (e + f) / 2.0  > 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {

            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1lf\n", (e + f )/ 2.0);
    }

    else{

    printf("Aluno reprovado.\n");
    }


    return 0;
}

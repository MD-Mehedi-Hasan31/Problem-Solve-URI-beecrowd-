#include<stdio.h>
#include<math.h>
int main()
{

    double x1,x2,y1,y2,d;

    scanf("%0.1lf %0.1lf",&x1,&y1);
    scanf("%0.1lf %0.1lf",&x2,&y2);

    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%0.4lf\n",d);

    return 0;
}


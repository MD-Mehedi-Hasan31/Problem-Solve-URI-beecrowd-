#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t;
    char str[1000];
    char rev[1000];
    scanf("%d%*c",&t);
    for(i=0;i<t;i++){
        gets(str);
        int l=strlen(str);
        for(j=0;j<l;j++){
            if((str[j]>='A'&&str[j]<='Z')||str[j]>='a'&&str[j]<='z')
                str[j]=str[j]+3;
               }
        int n=0;
        for(j=l-1;j>=0;j--){
            rev[n]=str[j];
            n++;
        }
        rev[n]='\0';
        int k=l/2;
        for(j=k;j<l;j++){
            rev[j]=rev[j]-1;
        }
        printf("%s\n",rev);
    }
    return 0;
}
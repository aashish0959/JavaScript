#include<stdio.h>
int main()
{
    int a,b,c;
     printf("enter the value a =");
    scanf("%d",&a);
    printf("enter the value b =");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("a= %d\n",a);
    printf("b= %d",b);
}
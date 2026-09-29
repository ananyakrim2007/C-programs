#include<stdio.h>
int main()
{
    int a;
    int b;
    float number;
    float d ;

    d = 100;

    printf("enter the number a :\n");
    scanf("%d",&a);
    printf("enter the number b:\n");
    scanf("%d",&b);
    d=a+b;
    printf("%d+%d\n",a,b);
    printf("%5.7f",d);
}

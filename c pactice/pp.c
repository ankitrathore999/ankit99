#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a 2 value:");
    scanf("%d%d",&a,&b);
    if (a<0)
    {
        a=-a;
    }
    if(b<0);
    {
        b=-b;
    }
    c=a+b;
    printf("sum of %d and %d is %d",a,b,c);
}

    
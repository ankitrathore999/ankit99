#include<stdio.h>
#include<math.h>
void main()

{
    int n;
    float p,R,r,emi;
    printf("principle amount:");
    scanf("%f",&p);
    printf("annual intrest rate:");
    scanf("%f",&R);
    printf("number of the month:");
    scanf("%d",&n);
    //calculate intrest rate/manth//
    r=R/(12*100);
    //cal.mant instalment//
    emi=p*r*pow(1+r,n)/(pow(1+r,n)-1);
    printf("monthly emi:%f",emi);

    return 0;
}
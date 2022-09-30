#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	long p;
	float r,si;
	printf("enter a principle amount");
	sacnf("%ld",&p);
	printf("time of intrest");
	scanf("%d",&t);
	printf("rate of intrest");
	scanf("%f",&r);
	si=p*t*r/100;
	printf("simple intrest %f",si);
}

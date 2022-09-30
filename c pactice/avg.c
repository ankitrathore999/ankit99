#include<stdio.h>
#include<math.h>
int main()
{
	float h,e,m,s,g,t;
	float avg;
	
	printf("enter h of marks");
	scanf("%f",&h);
	printf("enter e marks");
	scanf("%f",&e);
	printf("enter m marks");
	scanf("%f",&m);
	printf("enter s marks");
	scanf("%f",&s);
	printf("g marks");
	scanf("%f",&g);
	t=h+e+m+s+g;
	printf("total%f",t);
	avg=t/5;
	printf("\navg%f",avg);
	
	
}

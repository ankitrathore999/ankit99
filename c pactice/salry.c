#include<stdio.h>
int main()
{
	float basic,da,hra,gross;
	printf("enter a basic salray on an emp:");
	scanf("%f",&basic);
	da=basic*40/100;
	printf("\nenter da amount of emp %.2f:",da);
	hra=basic*20/100;
	printf("\nenter hra amount %.2f:",hra);
	gross=basic+da+hra;
	printf("\nenter gross salary of emp %.2f:",gross);
}

#include<stdio.h>
int main()
{
	int n;
    printf("Enter your roll number: ");
    scanf("%d",&n);
if (n==75)
{
	printf("\nFirst prize");
}
else if (n==60)
{
	printf("\nSecond prize");
}
else if (n==50)
{
	printf("\nThird prize");
}
else if (n==40)
{
	printf("\nFourth prize");
}
else if (n==30)
{
	printf("\nFifth prize");
}
else 
{
	printf("\nBetter luck next time");
}
}

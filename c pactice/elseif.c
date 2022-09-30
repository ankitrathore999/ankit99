#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter your roll no");
	scanf("%d",&n);
	if (n==70)
	{
		printf("\n first prize");
	}
	else if(n==50)
	{
		printf("\n second prize");
	}
	else if(n==30)
	{
		printf("\n 3rd prize");
	}
	else
	{
		printf("\n better luck next time");
	}
}

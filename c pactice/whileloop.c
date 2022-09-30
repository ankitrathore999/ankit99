#include<stdio.h>
int main()
{
	int i,n;
	printf("enter a value");
	scanf("%d",&n);
	i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			printf("\n not a prime number");
			break;
		}
		i++;
		
	}
	if(i==n)
	{
	printf("\n it is a prime value");	
	}
}

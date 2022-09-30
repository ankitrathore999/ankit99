#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("enter a 2 values");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("\na is greter:");
	}
	else if(b>a)
	{
		printf("\nb is greter:");
	}
	else if(a=b)
	{
		printf("\n both are equal:");
	}
}

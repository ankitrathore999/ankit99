#include<stdio.h>
int main()
{
	int a,b,c,x;
	float d;
	printf("\n press 1 for addittion");
	printf("\n press 2 for subtraction");
	printf("\n press 3 for multiplition");
	printf("\n press 4 for Division");
	printf("enter your choice");
	scanf("%d",&x);
	switch(x)
	{
		case 1: printf("enter 2 value");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("\n sum is %d",c);
		break;
		case 2:printf("\nenter 2 value");
		scanf("%d%d",&a,&b);
		c=a-b;
		printf("\n subtraction is %d",c);
		break;
		case 3:printf("\nenter 2 value");
		scanf("%d%d",&a,&b);
		c=a*b;
		printf("\n multilition is %d",c);
		break;
		case 4:printf("\n enter a 2 value :");
		scanf("%d%d",&a,&b);
		if(b!=0)
		{
			d=(float)a/b;
			printf("\n division is %2",d);
			
		}
		else
		{
			printf("\n can't divide by zero'");
		}
		break;
		default:printf("\n wrong entry");
	
		
	}
}

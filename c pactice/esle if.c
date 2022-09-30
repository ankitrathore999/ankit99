#include<stdio.h>
int main()
{
	int a,b,c;

	printf("\nenter 3 value:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b) 
	{
		if(a>c)
		{
		printf("\n A is gretest");
	}
	else if(c>a)
	printf("\n C is gretest");
}
else
{
	printf("\n A and c is equal and gratest");
}
if(b>c)
{
	
	 if (b>a)
	{
	printf("\n b is gratest");
	}
	else
	{
		printf("\n A and B are equal and gratest");
	}
}
else if(c>a)
{	if(c>b)
	{
		printf("\n C is gratest");
	}
	else {
		printf("\n B and c is equal and gratest");
	}

}
else
{
	printf("\n All are Equal");
}
}


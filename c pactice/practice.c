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
} else if(b>c)
{
    if(b>a)
    {
        printf("b is gratest");
    }
    else
    {
        printf("a and b is gratest");
    }
}
}

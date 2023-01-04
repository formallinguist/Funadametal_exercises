//nested if else.
#include<stdio.h>
void main()
{
	int x;
	printf("Enter x \n");
	scanf("%d",&x);
	if (x > 10)
	{
		printf("x is greather than 10\n");
		if (x > 20)
		{
		   printf("x is greater than 20\n");
	    }
	    else
	    {
	   	   printf("x is greater than 10 less than 20\n");
        }
	}   
	
}

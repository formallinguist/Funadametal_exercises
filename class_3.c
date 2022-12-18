#include<stdio.h> // standard input output
main(void)
{
	int num, num1, num2, result;
	
	scanf("%i",&num1);// printf is an outward/output statement, scanf is an inward/input statement.
	scanf("%i",&num2);
	
	for (num=num1;num<num2;num=num+1) && for (num=num1;num>num2;num=num-1)//
	{
		result = num%2;             // mod gives us  remainder or  modulus.
		if (result == 0)
		{
			printf ("%i\n",num);
		}
	}
	
    //f means formatted, c code resides inside function. name of the special function is "main", main is important.
}// {} is used to enclose a block of code.

// Logical statements.
// to check logical statement we need two sources of information. 1) input 2)set of all even numbers in the world.
//& is an adress operator.

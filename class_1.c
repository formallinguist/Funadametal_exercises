#include<stdio.h> // standard input output
main(void)
{
	int num, result;
	
	scanf("%i",&num);// printf is an outward/output statement, scanf is an inward/input statement.
	result = num%2;             // mod gives us  reminder or  modulus.
	if (result == 0)
	{
		printf ("Even");
	}
	else
	{
		printf ("odd");
	}
	
	
    //f means formatted, c code resides inside function. name of the special function is "main", main is important.
}// {} is used to enclose a block of code.

// Logical statements.
// to check logical statement we need two sources of information. 1) input 2)set of all even numbers in the world.
//& is an adress operator.

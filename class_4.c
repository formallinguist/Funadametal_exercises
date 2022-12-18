#include<stdio.h> // standard input output// dynamic = we have to give inputs// static = variable assignment.
main(void)
{
	int num, num1, num2, result;
	
	scanf("%i",&num1);// printf is an outward/output statement, scanf is an inward/input statement.
	scanf("%i",&num2);
	if (num1<num2)
	{
	    for (num=num1;num<num2;num=num+1) //&for (num=num1;num>num2;num=num-1)//
	    {
		    result = num%2;             // mod gives us  remainder or  modulus.
		    if (result == 0)
	        {
			  printf ("%i\n",num);
		    }
	    }
    }
    else
    {
    	for (num=num1;num>num2;num=num-1) //&for (num=num1;num>num2;num=num-1)//
	    {
		    result = num%2;             // mod gives us  remainder or  modulus.
		    if (result == 0)
	        {
			  printf ("%i\n",num);
		    }
	    }
	}
    
    //f means formatted, c code resides inside function. name of the special function is "main", main is important.
}// {} 

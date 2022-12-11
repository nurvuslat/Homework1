//C code to find HCF (Highest Common Factor) of two numbers.

#include <stdio.h>

int main(void) 
{
  
  int num1, num2, min, hcf, i;

  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);

  	if (num1 < num2) 
		{
	    min = num1;
		}
	else 
		{
		min = num2;
  		}

	  	for (i = 1; i <= min; i++) 
		{
		    if (num1 % i == 0 && num2 % i == 0) 
			{
		      hcf = i;
		    }
		}

  		printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);

  return 0;
}


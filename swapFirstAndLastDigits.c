//C code to swap first and last digits of a number

#include <stdio.h>

int main(void) 
{
  int number, first_digit, last_digit;

  printf("Enter a number: ");
  scanf("%d", &number);

  first_digit = number / 10;
  
  	while (first_digit >= 10) 
	{
    	first_digit /= 10;
  	}
  
  	last_digit = number % 10;

		number = number / 10;
		number = number * 10 + first_digit;
		number = number / 100;
		number = number * 100 + last_digit;

  			printf("The number with the first and last digits swapped is: %d\n", number);

  return 0;
}


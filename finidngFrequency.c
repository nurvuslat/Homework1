//C code to find frequency of each digit in a given integer.

#include <stdio.h>

int main(void) {

	int i, number, digit, freq[10] = {0};

	printf("Enter a number: ");
	scanf("%d", &number);
  
	  	while (number > 0) 
		{
	    	digit = number % 10;
	    	freq[digit]++;
	    	number /= 10;
	  	}

  		for (i = 0; i < 10; i++) 
		{
    		printf("Frequency of %d: %d\n", i, freq[i]);
  		}

  	return 0;
}


//C code with a natural number, n, as its input which calculates teh following formula and writes the result in the standard output: S = 1/2 + 1/4 + ... + 1/n.

#include <stdio.h>

int main()
{
    int n;
    double s = 0.0;

   	printf("Enter a natural number: ");
   	scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        s += 1.0 / i;
    }

   	printf("The result of the formula is: %.2lf\n", s);

    return 0;
}


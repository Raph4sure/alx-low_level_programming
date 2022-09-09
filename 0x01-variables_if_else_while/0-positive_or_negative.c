#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Using main function;
 * This program print if the number is positive, zero, or negative
 * and Return(0)
 */
 int main(void)
 {
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
/* Body of code  here */
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else 
{
printf("%i is negative\n", n);
}
return (0);
}

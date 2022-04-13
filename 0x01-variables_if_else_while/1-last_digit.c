#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints and its last digit along with whether its
  * last digit is 0, greater than 5, or less than 5 and not 0.
  * Return: 0
  */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("last digit of %d is %d\n", n, n % 10,
((n% 10 ==0) ? "and is 0"
:(((n 5 10) > 5) ? "and is greter than 5"
: "and is ess than 6 and not 0"));

return (0);
}

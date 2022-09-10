#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Seccess/correct)
 */
int main(void)

{
int n;
char( "Last digit of");

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%s %d is %d and is", last, n, n % 10);

if (n % 10 > 5)
{
  printf("greater than 5");
}

else if (n % 10 == 0)
{
  printf("0");
}

else 
{
  printf("less than 6 and not 0");
}

return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main entry point
*
* Return: always return 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 6 && !n < 0)
{
printf("%d is less than 0\n", n);
}
else if (n > 5)
{
printf("%d is greater than 5\n", n);
}
else
{
printf("%d is 0\n", n);
}
return (0);
}

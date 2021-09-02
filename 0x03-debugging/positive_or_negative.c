#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
* positive_or_negative - print positive, negative and zero
* @i: Integer to be checked
* Return: 0 on (success)
*/
void positive_or_negative(int i)
{
srand(time(0));
i = rand() - RAND_MAX / 2;
  /* your code goes there */
if (i > 0)
{
printf("%i is positive\n", i);
}
else if (i == 0)
{
printf("%i is zero\n", i);
}
else if (i < 0)
{
printf("%i is negative\n", i);
}
}


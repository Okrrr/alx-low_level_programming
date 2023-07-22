#include "main.h"

/**
 * main - determines if number is positive or negative or zero
(* 0 : is the number to be checked
 * Return: Always 0
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int l;

for (i = 'A'; i <= 'Z'; i++)
{
l = i + 32;
putchar(l);
putchar('\n');
}
return (0);
}

#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
if (i != 10)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

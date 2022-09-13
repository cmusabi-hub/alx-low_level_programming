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

for (i = 10; i < 30; i++)
{
putchar((i % 10) + '0');
if (i != 29)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

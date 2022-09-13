#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
int a;
int b;

for (a = 20; a <= 29; a++)
{
for (b = 20; b <= 29; b++)
{
if ((b % 10) > (a % 10))
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');
if (a != 28 || b != 29)
{
putchar(',');
putchar(' ');
}
}

}
}
putchar('\n');
return (0);
}

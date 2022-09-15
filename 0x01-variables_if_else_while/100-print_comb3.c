#include <stdio.h>
/**
* main - main block
* Description: Print all numbers of base64 in lowercase
* You can only use `putchar`, and only 3 times
* Return: 0
*/

int main(void)
{
int a, b;
for (a = 30; a <= 39; a++)
{
for (b = 30; b <= 39; b++)
{
if ((a % 10) < (b % 10))
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');
if (a != 38 || b != 39)
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

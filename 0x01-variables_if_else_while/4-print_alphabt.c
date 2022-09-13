#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
if (a != 'q' && a != 'e')
putchar(a);
a++;
}
putchar('\n');

return (0);
}

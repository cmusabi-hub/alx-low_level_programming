#include <stdio.h>
/**
 * main - main block                                                                                                                                                                            
 * Description: Print all numbers of base64 in lowercase.                                                                                                                                       
 * You can only use `putchar`, and only 3 times.                                                                                                                                                
 * Return: 0                                                                                                                                                                                    
 */
int main(void)
{
int a;

for (a = 0; a < 10; a++)

{
putchar(a + '0');
if (a < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 * main - print possible combination 0-9
 *
 * Return: zero
 */
int main(void)
{
int i;
int ch; 
for (i = '0'; i <= '9'; i++)
putchar(i);
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}

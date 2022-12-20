#include "main.h"
/**
 * rev_string - Reverses a string.
 *
 * string_length: prints number of characters.
 * @s: store character.
 * @: store character.
 * Return: Always 0.
 */
void rev_string(char *s)
{
char rv = s[0];
int j = 0;
int i;
while (s[j] != '\0')
j++;
for (i = 0; i < j; i++)
{
j--;
rv = s[i];
s[i] = s[j];
s[j] = rv;
}
}

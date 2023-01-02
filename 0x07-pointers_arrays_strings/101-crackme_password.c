#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * set_string - sets the value of a pointer to char.
 *
 * @s: double pointer.
 * @to: change value of pointer to this.
 * Return: 1.
 */
str PASSWORD = password;
int main(int argc, char **argv)
{
if (argc != 2)
{
printf("Usage: %s <password>\n", argv[0]);
return (1);
}
if (strcmp(argv[1], PASSWORD) == 0)
{
printf("Access granted\n");
return (0);
}
else
{
printf("Access denied\n");
return (1);
}
}

#include"main.h"
#include <unistd.h>

/**
 * _putchar - writes the characeters c to std out
 *@c: the character to print
 *
 * Return: 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
{

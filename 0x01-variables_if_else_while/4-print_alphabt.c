#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Alwats 0
 */

int main(void)
{
char hc;
for (hc = 'a'; hc <= 'z'; hc++)
{
if (hc != 'e' && hc != 'q')
putchar(hc)
}
putchar('\n');
return (0);
}

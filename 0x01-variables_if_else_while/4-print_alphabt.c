#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * Return: return 0 if successful
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c!= 'q')
			putchar(c);
	}
	putchar('\n');
	return(0);
}

#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 if successful
 *
 * int main(void)
*{
*	char c;
*
*	for (c = 'a'; c <= 'z'; c++)
*	{
*		if (c != 'e' && c != 'q')
*		putchar(c);
*	}
*	putchar('\n');
*	return (0);
*}
*/
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
		if (letter == 'z')
		{
			letter = 'A';
			for (; letter <= 'Z'; letter++)
			{
				putchar(letter);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints lowercase alphabets
 * Return: Always 0 (success)
 */

int main(void)

{

	char ch = 'a';

	while (ch <= 'z')

	{

		if (ch != 'e' && ch != 'q')

	{

		putchar(ch);

	}

		ch++;

	}

		putchar('\n');

	return (0);

}

#include <stdio.h>
/**
 *main - Entry
 *Return: always 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	putchar('0' + x);
	if (x == 9)
	continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}

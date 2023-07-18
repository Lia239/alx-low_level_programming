#include <stdio.h>

/**
 * main - point of enter
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i < 1024; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}


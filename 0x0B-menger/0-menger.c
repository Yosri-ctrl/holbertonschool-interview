#include "menger.h"
#include <math.h>

/**
 * menger - Entry point
 *
 * @level: the level
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
void menger(int level)
{
	int length = pow(3, level);
	int i, j;

	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
			putchar(check(i, j));
		putchar('\n');
	}
}
/**
 * check - chreck if it's an empty or filled space
 * @i: horizontal position
 * @j: verticle position
 * Return: # if filled " " otherwise
 */
char check(int i, int j)
{
	while (i != 0 || j != 0)
	{
		if (i % 3 == 1 && j % 3 == 1)
			return (' ');
		i /= 3;
		j /= 3;
	}
	return ('#');
}
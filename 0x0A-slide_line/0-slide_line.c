#include "slide_line.h"
/**
 * slide_line - function that slides and merges an array of integers.
 * @line: points to an array of integers containing
 * @size: elements, that must be slided & merged to the
 * @direction: represented by direction
 * Return: 1 in success, or 0 when failure.
 */
int slide_line(int *line, size_t size, int direction)
{
	/*int new[size];
	size_t i, j;

	for (i = 0; i < size; i++)
		new[i] = line[i];

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (new[i] != 0 && new[j] != 0 && new[i] != new[j])
				break;
			if (new[i] != 0 && new[i] == new[j])
			{
				new[i] += new[i];
				new[j] = 0;
				break;
			}
		}
	}

	switch (direction)
	{
	case 0:
		for (i = 0, j = 0; i < size; i++)
			if (new[i] != 0)
			{
				line[j] = new[i];
				j++;
			}
		for (; j < size; j++)
			line[j] = 0;
		break;
	case 1:
		for (j = 0, i = 0; j < size; j++)
			if (new[j] == 0)
			{
				line[i] = 0;
				i++;
			}

		for (i = size - 1, j = size - 1; i > 0; i--)
		{
			if (new[i] != 0)
			{
				line[j] = new[i];
				j--;
			};
		}
		line[j] = new[i];

		break;
	default:
		return (0);
		break;
	}*/
	return (1);
}

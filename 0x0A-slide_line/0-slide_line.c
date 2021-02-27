#include "slide_line.h"
/**
 * slide_line - return the result
 * @line: the list to treat
 * @size: line's size
 * @direction: Ether L or R
 * Return: 1 in success, or 0 when failure.
 **/
int slide_line(int *line, size_t size, int direction)
{
	switch (direction)
	{
	case 0:
		addition(line, size);
		alignement(line, size);
		break;
	case 1:
		reverse(line, size);
		addition(line, size);
		alignement(line, size);
		reverse(line, size);
		break;
	default:
		return (0);
		break;
	}
	return (1);
}

void reverse(int *line, size_t size)
{
	size_t i, j;
	int aux;

	for (i = 0, j = size - 1; i < size / 2; i++, j--)
	{
		aux = line[i];
		line[i] = line[j];
		line[j] = aux;
	}
}

void addition(int *line, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
		for (j = i + 1; j < size; j++)
		{
			if (line[i] != 0 && line[j] != 0 && line[i] != line[j])
				break;
			if (line[i] != 0 && line[i] == line[j])
			{
				line[i] += line[i];
				line[j] = 0;
				break;
			}
		}
}

void alignement(int *line, size_t size)
{
	size_t i, j;
	for (i = 0, j = 0; i < size; i++)
		if (line[i] != 0)
		{
			line[j] = line[i];
			j++;
		}
	for (; j < size; j++)
		line[j] = 0;
}
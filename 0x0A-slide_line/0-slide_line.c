#include "slide_line.h"
/**
 * slide_line - slide ans merge a list of int
 * @line: the list to treat
 * @size: line's size
 * @direction: left or right
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

/**
 * reverse - reverse the list
 * @line: the list to treat
 * @size: line's size
 **/
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

/**
 * addition - add the slots with the same values
 * @line: the list to treat
 * @size: line's size
 **/
void addition(int *line, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
		for (j = i + 1; j < size; j++)
		{
			if (line[i] != 0 && line[j] != 0 && line[i] != line[j])
			{
				i = j;
				break;
			}

			if (line[i] != 0 && line[i] == line[j])
			{
				line[i] += line[i];
				line[j] = 0;
				break;
			}
		}
}

/**
 * alignement - push all values to the left
 * @line: the list to treat
 * @size: line's size
 **/
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

#include "regex.h"
/**
* regex_match - checks whether a given pattern matches a given string.
* @str: string to compare
* @pattern: pattern to check
* Return: 1 if the pattern matches
*/
int regex_match(char const *str, char const *pattern)
{
	int x = 0;
	int y = 0;

	if (!str || !pattern)
		return (0);

	x = *str && (*str == *pattern || *pattern == '.');
	y = *(pattern + 1) == '*';

	if (!*str && !y)
		return (*pattern ? 0 : 1);
	else if (x && y)
		return (regex_match(str + 1, pattern) || regex_match(str, pattern + 2));
	else if (x && !y)
		return (regex_match(str + 1, pattern + 1));
	else if (y)
		return (regex_match(str, pattern + 2));
	return (0);
}


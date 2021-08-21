#include "substring.h"

/**
 * find_substring - finds all the possible substrings containing a list of words, within a given string. 
 * @s: is the string to scan
 * @words: array of words all substrings
 * @nb_words: number of elements in the array words
 * @n: address at which to store the number of elements
 * Return: an allocated array, storing each index in s, at which a substring was found
 */
int *find_substring(char const *s, char const **words, int nb_words, int *n)
{

	int indx, count, slen, wlen, check;
	int i, j, k;
	int *match, *array;
	if (!s || !words || !n || nb_words == 0)
		return (NULL);
	slen = strlen(s);
	wlen = strlen(words[0]);
	array = malloc(slen * sizeof(int));
	if (!array)
		return (NULL);
	match = malloc(nb_words * sizeof(int));
	if (!match)
		return (NULL);
	for (i = count = 0; i <= slen - nb_words * wlen; i++)
	{
		memset(match, 0, nb_words * sizeof(int));
		for (j = 0; j < nb_words; j++)
		{
			for (k = 0; k < nb_words; k++)
			{
				indx = i + j * wlen;
				check = strncmp(s + indx, *(words + k), wlen);
				if (!*(match + k) && !check)
				{
					*(match + k) = 1;
					break;
				}
			}
			if (k == nb_words)
				break;
		}
		if (j == nb_words)
			*(array + count) = i, count += 1;
	}
	free(match);
	*n = count;
	return (array);
}
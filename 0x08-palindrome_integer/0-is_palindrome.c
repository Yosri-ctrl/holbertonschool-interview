#include <stdlib.h>
#include <stdio.h>

#include "palindrome.h"

/**
 * is_palindrome - check if n is palindrome
 *
 * @n: the number to check
 * Return: Return 1 if palindrome, o otherwise
 */
int is_palindrome(unsigned long n)
{
	unsigned long rev, sum = 0, temp = n;

	while(n > 0){
		rev = n % 10;
		sum = (sum * 10) + rev;
		n /= 10;
	}
	if (sum == temp)
		return (1);
	return (0);
}

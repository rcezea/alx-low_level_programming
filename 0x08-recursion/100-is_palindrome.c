#include "main.h"
#include <string.h>
int is_palindrome(char *s);
int check(char *s, int len, int j);
int _strlen(char *s);
/**
 * is_palindrome- function that checks for palindrome
 * @s: string to be checked
 * Return: 1 for palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);
	int j = 0;

	if (!(*s))
		return (1);
	return (check(s, len, j));
}

/**
 * check - checks if characters at one position are identical at the other end
 * @s: string passed
 * @len: length of string
 * @j: index of string
 * Return: 1 if true, 0 otherwise
 */

int check(char *s, int len, int j)
{
	if (s[j] == s[len / 2])
		return (1);
	if (s[j] == s[len - j - 1])
	{
		j++;
		return (check(s, len, j));
	}
	return (0);
}

/**
 * _strlen - returns length of string
 * @s: string passed
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen(s + len);
	}
	return (len);
}

#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * rev_string - reverses a string
 * @s: string passed
 */
void rev_string(char *s)
{
	int i = 0, n = 0;
	char me[500];

	while (s[i] != '\0')
	{
		me[n] = s[i];
		i++;
		n++;
	}
	n--;
	i = 0;
	while (me[n])
	{
		s[i] = me[n];
		i++;
		n--;
	}
}

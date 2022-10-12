#include "function_pointers.h"
/**
 * print_name - funtion that prints a name
 * @name: name 
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	void (*tmp)(char *);
	tmp = f;
	tmp(name);
}

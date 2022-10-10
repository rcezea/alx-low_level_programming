#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * print_dog - initializes a variable of type struct dog
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("nil");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("nil");
	else
		printf("Owner: %s\n", d->owner);
}
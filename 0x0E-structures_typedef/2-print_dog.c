#include<stdio.h>
#include "dog.h"

/**
 * print_dog - initializes a variable of type struct dog
 * @d: dog struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: (nil\n");
		if (d->owner)
			printf("Name: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}

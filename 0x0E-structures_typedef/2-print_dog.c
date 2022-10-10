#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @name: d
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

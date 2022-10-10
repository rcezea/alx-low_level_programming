#include<stdio.h>
#include<stdlib.h> 
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @dog *d - struct passed
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

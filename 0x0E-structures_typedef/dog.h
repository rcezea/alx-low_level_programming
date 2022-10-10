#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - properties of a dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

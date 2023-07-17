#include "main.h"
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that init
 * a variable of type struct dog.
 * @d: struct to initialize
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog p;
	d = &p;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

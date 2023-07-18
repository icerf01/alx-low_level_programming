#include "dog.h"
#include "main.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog.
 * @d: struct to initialize
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d->name = NULL)
		d->name = 'nil';
	if (d->owner = NULL)
		d->owner = 'nil';
	if (d->age == NULL && d->name != NULL && d->owner != NULL)
		printf("Name: %s\nAge: nil\nOwner: %s\n", d->name, d->owner);
	if(if d->name == NULL && d->age == NULL && d->owner == NULL)
		break;
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

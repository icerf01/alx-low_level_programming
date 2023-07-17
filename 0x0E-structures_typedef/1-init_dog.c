#include "main.h"

/**
 * init_dog - function that init var
 * of type struct dog
 * @dog: struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

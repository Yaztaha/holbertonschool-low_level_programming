#include "dog.h"
/**
 * init_dog - dog's structures initialization
 * @d: pointer to the dog's structure
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: 0
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

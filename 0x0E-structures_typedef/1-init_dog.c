#include <stdio.h>
#include "dog.h"
/**
 *init_dog- A function that initialize a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description:A function that initialize a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

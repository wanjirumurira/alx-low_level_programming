#include <stdio.h>
#include "dog.h"
/**
 * struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description:Define a new type struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner
};

int main(void)
{
	struct dog my_dog;

	return (0);
};

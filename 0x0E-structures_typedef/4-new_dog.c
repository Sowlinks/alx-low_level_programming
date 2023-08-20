#include <stdio.h>
#include "dog.h"

/**
* print_dog- create a new dog
* @new_dog: member d
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Description: a function that creates a new dog
*/

dog_t *new_dog(char *name, float age, char *owner);
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);


	if ((*d).age < 0)
		printf("(Age: nil)\n");
	else

		printf("Age: %f\n", d->age);

	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

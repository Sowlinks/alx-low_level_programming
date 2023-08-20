#include "dog.h"
#include <stdlib.h>

/**
* free_dog- print struct dog
* @d: member d
* Description: a function that frees dog
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free((*d).name);
	free((*d).owner);
	free(d);
}

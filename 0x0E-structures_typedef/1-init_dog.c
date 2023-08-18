#include <stdlib.h>
#include "dog.h"

/**
* init_dog- a function that initializes a variable
* struct dog: a structure data type that defines a dog
* @d: member d
* @name: name of the dog
* @age: dog's age
* @owner: owner of the dog
* Description: a function that initializes a variable of type struct dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		*d.name = name;
		*d.age =  age;
		*d.owner = owner;
	}
}

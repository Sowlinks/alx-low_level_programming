#include <stdio.h>
#include <stddef.h>

/**
  * array_iterator - executes a funciton
  * @size: size of the array
  * @array: array member
  * @action: function pointer
  * Description: a function that executes a function given
  * as a parameter on each element of an array.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int num;

	if (num > 0 && array && action)
	{
		for (num = 0; num < size; num++)
		{
			action(array[num]);
		}
	}
}

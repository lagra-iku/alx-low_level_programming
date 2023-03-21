#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free dog
 * @d: type dog
*/
void free_dog(dog_t *d)
{
	if (d)
		free(d);
	else
		return;
}

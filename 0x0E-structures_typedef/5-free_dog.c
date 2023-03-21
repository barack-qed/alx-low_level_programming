#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - dog
 * @d: free dog
 *
 * Return
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free (d->owner);
		free(d->naeme);
		free(d);
	}
}

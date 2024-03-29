#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints all the data of a dog
 * @d: A dog structuire
 *
 * return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}

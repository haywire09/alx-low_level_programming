#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initiliaze a variable of struct type dog
 * @d: the dog to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: owner of the dog
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

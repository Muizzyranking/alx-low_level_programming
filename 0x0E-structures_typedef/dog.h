#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - new data type representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

#endif /* DOG_H */

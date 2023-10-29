#include"dog.h"

int _len(char *str);

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: returns the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);


	dog = sizeof(dog_t);
	if (dog == NULL)
		return (NULL);


	dog->name = malloc(sizeof(char) * (_len(name));
	dog->owner = malloc(sizeof(char) * (_len(owner));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);

}

/**
 * _len - checks the lenght of a string + '\0'
 * @str: string to be checked
 * Return: returns the lenght + 1 of the string
*/

int _len(char *str)
{
	int len = 1;

	while (str)
		len++;
	return (len);
}

#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - a function that creates new dog.
 * @name: name of the dog.
 * @age: age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the new dog or NULL if funtion fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t  *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}

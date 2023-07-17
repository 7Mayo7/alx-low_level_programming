#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: Owner's name
 * Return: Pointer to the newly created dog_t structure
 * NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return (NULL);

	Copy the name using strdup
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

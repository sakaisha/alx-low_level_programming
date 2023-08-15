#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog, or NULL if allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
       	if (name == NULL || owner == NULL)
	       	return (NULL);
	
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	char *name_copy = malloc(sizeof(char) * (strlen(name) + 1));
	char *owner_copy = malloc(sizeof(char) * (strlen(owner) + 1));
       
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}
	
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}

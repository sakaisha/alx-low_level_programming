#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 * Return: Pointer to the newly created dog structure, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    if (name == NULL || owner == NULL)
        return NULL;

    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    int name_len = _strlen(name);
    int owner_len = _strlen(owner);

    new_dog->name = malloc(name_len + 1);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return NULL;
    }

    new_dog->owner = malloc(owner_len + 1);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }

    _strcpy(new_dog->name, name);
    _strcpy(new_dog->owner, owner);
    new_dog->age = age;

    return new_dog;
}

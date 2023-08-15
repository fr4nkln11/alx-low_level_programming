#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Return: a new dog of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}

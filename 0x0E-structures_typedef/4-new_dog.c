#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - create new data structure for dog
* @name: name of dog
* @age: age of dog
* @owner: dog owner
* Return: Pointer to new dog
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpname, *cpowner;
	int lenname, lenowner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	lenname = _strlen(name);
	lenowner = _strlen(owner);
	cpname = malloc(sizeof(char) * lenname + 1);

	if (cpname == NULL)
	{
		free(cpname);
		free(new_dog);
		return (NULL);
	}
	cpname = _strcpy(cpname, name);
	cpowner = malloc(sizeof(char) * lenowner + 1);
	if (cpowner == NULL)
	{
		free(cpowner);
		free(cpname);
		free(new_dog);
		return (NULL);
	}
	cpowner = _strcpy(cpowner, owner);
	new_dog->name = cpname;
	new_dog->age = age;
	new_dog->owner = cpowner;
	return (new_dog);
}


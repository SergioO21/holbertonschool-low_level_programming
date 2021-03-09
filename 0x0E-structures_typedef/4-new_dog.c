#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - Creates a new dog.
 *
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: If the fuction fails, returns (0).
 *         Else, returns a new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int l_name, l_owner;

	dog_t *my_new_dog;

	my_new_dog = malloc(sizeof(dog_t));

	if (my_new_dog == 0)
		return (0);

	if (name == 0)
		my_new_dog->name = 0;

	else
	{
		l_name = _strlen(name);
		my_new_dog->name = (char *) malloc(sizeof(char) * (l_name + 1));

		if (my_new_dog->name == 0)
		{
			free(my_new_dog);
			return (0);
		}

		my_new_dog->name = _strcpy(my_new_dog->name, name);
	}

	if (owner == 0)
		my_new_dog->owner = 0;

	else
	{
		l_owner = _strlen(owner);
		my_new_dog->owner = (char *) malloc(sizeof(char) * (l_owner + 1));

		if (my_new_dog->name == 0)
		{
			free(my_new_dog);
			return (0);
		}

		my_new_dog->owner = _strcpy(my_new_dog->owner, owner);
	}

	my_new_dog->age = age;

	return (my_new_dog);
}

/**
 * _strlen - returns the length of a string
 * @s: String pointer
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}

/**
 * _strcpy - copies the string pointed to by src,
 *           including the terminating null byte (\0),
 *           to the buffer pointed to by dest.
 *
 * @dest: Destiny
 * @src: Source
 * Return: Source Value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

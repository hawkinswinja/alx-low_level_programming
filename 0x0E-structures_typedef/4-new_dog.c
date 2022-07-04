#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - add another dog details
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);
	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;
	return (dog1);
}

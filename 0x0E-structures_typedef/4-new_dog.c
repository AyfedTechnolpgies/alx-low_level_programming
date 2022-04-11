#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - swaps integers with pointers.
 * @s: is a pointer to a char
 *
 * Return: nothing.
**/
int _strlen(char *s)
{
int i;
for (i = 0; *s != '\0'; s++)
{
i++;
}
return (i);
}

/**
 * _strncpy - Swaps integers wih pointers.
 *
 * @dest: is a pointer to a char.
 *
 * @src: is a pointer to a char.
 *
 * @n: is a pointer to an int.
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for (i = i; i < n; i++)
dest[i] = '\0';

return (dest);
}

/**
 * new_dog - Creates function with copy of name and owner
 *
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 *
 * Return: nothing.
**/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
char *newName;
char *newOwner;
int size = 4;

newDog = (dog_t *)malloc(sizeof(struct dog) * size);
if (newDog == NULL)
{
free(newDog);
return (NULL);
}
newName = (char *)malloc(sizeof((name) + 1) * size);
if (newName == NULL)
{
free(newDog);
return (NULL);
}
newOwner = (char *)malloc(sizeof((owner) + 1) * size);
if (newOwner == NULL)
{
free(newDog);
free(newName);
return (NULL);
}
newName = name;
newOwner = owner;

newDog->name = newName;
newDog->owner = newOwner;
newDog->age = age;

return (newDog);
}

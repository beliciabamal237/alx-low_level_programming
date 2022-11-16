#ifndef DOG_H
#define DOG_H


#include <stdio.h>
#include <stdlib.h>
/**
 * struct Dog -  short description
 * @name: the dog'sname
 * @owner: the dog's owner
 * @age: the dog's age
 */
struct Dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif


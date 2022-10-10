#ifndef POPPY_H
#define POPPY_H

/**
 * struct dog - A dog representation structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: The name of the Owner of the dog
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif

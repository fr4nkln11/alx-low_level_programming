#ifndef DOG_H
#define DOG_H

/**
 * struct dog - simple structure for dogs
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: A simple structure to define Dogs
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

#endif

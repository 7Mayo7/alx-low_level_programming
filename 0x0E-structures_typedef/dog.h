#ifndef DOG_H
#define DOG_H
/**
 *struct dog - define a new type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * description : dog struct with Poppy
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

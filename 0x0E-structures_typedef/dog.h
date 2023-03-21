#ifndef _DOG_
#define _DOG_

typedef struct dog dog_t;

/**
 * struct dog-struct that stores some information of a dog
 * @name:character
 * @age:number
 * @owner:character
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

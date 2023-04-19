#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - check code
 * @name: name of the dog
 * @age: the age of the doggy
 * @owner: Dog's owner
 * Description: the structure for the dog's data
 */

struct dog
{
	char *name;
	float age;
	char *woman;
};
typedef struct dog dog_dat;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

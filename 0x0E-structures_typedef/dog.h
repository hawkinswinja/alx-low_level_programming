#ifndef _STRUCT_DOG_
#define _STRUCT_DOG_
/**
  * dog_t - alias for struct dog
  */
typedef struct dog dog_t;
/**
  * struct dog - data for dog
  * @name: dog name
  * @age: age of dog
  * @owner: owner of the dog
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

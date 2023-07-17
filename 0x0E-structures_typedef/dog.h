#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic info
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dogT - typedef for struct dog
 */
typedef struct dog dogT;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dogT *new_dog(char *name, float age, char *owner);
void free_dog(dogT *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

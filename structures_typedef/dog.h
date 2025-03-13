#ifndef DOG_H
#define DOG_H

/* Define a new type struct dog */
/**
 * struct dog - A structure to represent a dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */
struct dog
{
	char *name;   /* Dog's name */
	float age;     /* Dog's age */
	char *owner;   /* Dog's owner */
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

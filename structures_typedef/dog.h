#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure defining a dog
 * @name: Pointer to the dog's name
 * @age: Dog's age (in float)
 * @owner: Pointer to the owner's name
 *
 * Description: A structure that stores information about a dog,
 * including its name, age, and the name of its owner.
 */

typedef struct dog 
{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
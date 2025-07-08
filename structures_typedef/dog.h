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

struct dog 
{
    char *name;
    float age;
    char *owner;
};

/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to struct dog to initialize
 * @name: Name to assign to the dog
 * @age: Age to assign to the dog
 * @owner: Owner to assign to the dog
 *
 * Description: This function sets the fields of the struct dog
 * pointed to by d to the values passed in name, age, and owner.
 */
 
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
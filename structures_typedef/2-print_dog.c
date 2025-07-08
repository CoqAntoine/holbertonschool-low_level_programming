#include <stdio.h>
#include "dog.h"

{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d.name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d.name);
	printf("Age: ")
	if (d.age == NULL)
		printf("(nil)\n");
	else
		printf("%f\n", d.age);
	printf("Owner: ");
	if (d.owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d.age);

}
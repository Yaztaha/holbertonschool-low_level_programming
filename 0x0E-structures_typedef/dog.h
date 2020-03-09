#ifndef DOG_STRUCT
#define DOG_STRUCT
/**
 * struct dog - dog's structure
 * @name: dog's age
 * @age: dog's age
 * @owner: dog owner's name
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

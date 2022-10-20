#ifndef DOG_H

#define DOG_H



/**
 *
 *  * struct dog - Struct dog
 *
 *   * @name: name
 *
 *    * @age: age
 *
 *     * @owner:  owner
 *
 *      * Description: This struct is for dog
 *
 *       */



struct dog

{

		char *name;

			float age;

				char *owner;

};



typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);



#endif /*DOG_H*/

#include <stdlib.h>









#include "dog.h"















/**
 *
 *
 *
 *
 *
 * * _copy  -   Make a copy of passed in argument
 *
 *
 *
 *
 *
 * * @src:      Data to make copy of
 *
 *
 *
 *
 *
 * * Return:    Pointer
 *
 *
 *
 *
 *
 * */















char *_copy(char *src)





{





		char *ptr;





			int i, len;















				if (src == NULL)





						{





									return (NULL);





										}















					for (len = 0; src[len] != '\0'; len++)





								;















						ptr = malloc(sizeof(char) * (len + 1));















							if (ptr == NULL)





									{





												return (NULL);





													}















								for (i = 0; src[i] != '\0'; i++)





										{





													ptr[i] = src[i];





														}















									ptr[i] = '\0';





										return (ptr);





}















/**
 *
 *
 *
 *
 *
 * * new_dog     - Create a new dog variable
 *
 *
 *
 *
 *
 * * @name:        Name of the dog
 *
 *
 *
 *
 *
 * * @age:         Age of the dog
 *
 *
 *
 *
 *
 * * @owner:       Owner of the dog
 *
 *
 *
 *
 *
 * * Return:       Pointer to new dog variable
 *
 *
 *
 *
 *
 * */















dog_t *new_dog(char *name, float age, char *owner)





{





		dog_t *snoopie;





			char *new_name, *new_owner;















				if (name == NULL || owner == NULL)





						{





									return (NULL);





										}















					snoopie = malloc(sizeof(dog_t));





						if (snoopie == NULL)





								{





											return (NULL);





												}















							new_name = _copy(name);





								if (new_name == NULL)





										{





													free(snoopie);





															return (NULL);





																}





									(*snoopie).name = new_name;















										(*snoopie).age = age;















											new_owner = _copy(owner);





												if (new_owner == NULL)





														{





																	free((*snoopie).name);





																			free(snoopie);





																					return (NULL);





																						}





													(*snoopie).owner = new_owner;















														return (snoopie);





}





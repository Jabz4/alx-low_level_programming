100-reverse_listint.c

Who has access

O

System properties

Type

C

Size

370 bytes

Storage used

370 bytes

Location

0x13-more_singly_linked_lists

Owner

Ojo Samuel

Modified

Oct 23, 2022 by Ojo Samuel

Opened

11:49 AM by me

Created

Oct 24, 2022

No description

Viewers can download

#include "lists.h"



/**
 *
 *  * free_listp - frees a linked list
 *
 *   * @head: head of a list.
 *
 *    *
 *
 *     * Return: no return.
 *
 *      */

void free_listp(listp_t **head)

{

		listp_t *temp;

			listp_t *curr;



				if (head != NULL)

						{

									curr = *head;

											while ((temp = curr) != NULL)

														{

																		curr = curr->next;

																					free(temp);

																							}

													*head = NULL;

														}

}



/**
 *
 *  * print_listint_safe - prints a linked list.
 *
 *   * @head: head of a list.
 *
 *    *
 *
 *     * Return: number of nodes in the list.
 *
 *      */

size_t print_listint_safe(const listint_t *head)

{

		size_t nnodes = 0;

			listp_t *hptr, *new, *add;



				hptr = NULL;

					while (head != NULL)

							{

										new = malloc(sizeof(listp_t));



												if (new == NULL)

																exit(98);



														new->p = (void *)head;

																new->next = hptr;

																		hptr = new;



																				add = hptr;



																						while (add->next != NULL)

																									{

																													add = add->next;

																																if (head == add->p)

																																				{

																																									printf("-> [%p] %d\n", (void *)head, head->n);

																																													free_listp(&hptr);

																																																	return (nnodes);

																																																				}

																																		}



																								printf("[%p] %d\n", (void *)head, head->n);

																										head = head->next;

																												nnodes++;

																													}



						free_listp(&hptr);

							return (nnodes);

}

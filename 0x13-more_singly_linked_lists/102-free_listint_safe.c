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
 *  * free_listp2 - frees a linked list
 *
 *   * @head: head of a list.
 *
 *    *
 *
 *     * Return: no return.
 *
 *      */

void free_listp2(listp_t **head)

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
 *  * free_listint_safe - frees a linked list.
 *
 *   * @h: head of a list.
 *
 *    *
 *
 *     * Return: size of the list that was freed.
 *
 *      */

size_t free_listint_safe(listint_t **h)

{

		size_t nnodes = 0;

			listp_t *hptr, *new, *add;

				listint_t *curr;



					hptr = NULL;

						while (*h != NULL)

								{

											new = malloc(sizeof(listp_t));



													if (new == NULL)

																	exit(98);



															new->p = (void *)*h;

																	new->next = hptr;

																			hptr = new;



																					add = hptr;



																							while (add->next != NULL)

																										{

																														add = add->next;

																																	if (*h == add->p)

																																					{

																																										*h = NULL;

																																														free_listp2(&hptr);

																																																		return (nnodes);

																																																					}

																																			}



																									curr = *h;

																											*h = (*h)->next;

																													free(curr);

																															nnodes++;

																																}



							*h = NULL;

								free_listp2(&hptr);

									return (nnodes);

}

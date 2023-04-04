#include "lists.h"
<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
=======
#include <stdio.h>
#include <stdlib.h>
>>>>>>> f6dcacf4e7b34a051b906b9d08779b77dbc0b8d2

/**
* print_listint - prints all the elements of a linked list
* @h: linked list of type listint_t to print
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
<<<<<<< HEAD
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
=======
	 size_t number = 0;

	  while (h)
		   {
			    printf("%d\n", h->n);
			     number++;
			      h = h->next;
			       }

	   return (number);
>>>>>>> f6dcacf4e7b34a051b906b9d08779b77dbc0b8d2
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
* main - check the code
* 
* Return: Always 0.
*/
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
=======
 *  * main - check the code
 *   * 
 *    * Return: Always 0.
 *     */
int main(void)
{
	    listint_t *head;
	        listint_t *new;
		    listint_t hello = {8, NULL};
		        size_t n;

			    head = &hello;
			        new = malloc(sizeof(listint_t));
				    if (new == NULL)
					        {
							        printf("Error\n");
								        return (1);
									    }
				        new->n = 9;
					    new->next = head;
					        head = new;
						    n = print_listint(head);
						        printf("-> %lu elements\n", n);
							    free(new);
							        return (0);
>>>>>>> f6dcacf4e7b34a051b906b9d08779b77dbc0b8d2
}

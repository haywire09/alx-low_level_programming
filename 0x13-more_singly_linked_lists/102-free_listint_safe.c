102-free_listint_safe.c.txt

Who has access

A

System properties

Type

Text

Size

1 KB

Storage used

1 KB

Location

more_singly_linked_lists -

Owner

Antony Bahati

Modified

24 Oct 2022 by Antony Bahati

Opened

02:37 by me

Created

25 Oct 2022

No description

Viewers can download

#include "lists.h"

#include <stdlib.h>

#include <stdio.h>



/**

 * _ra - reallocates memory for an array of pointers

 * to the nodes in a linked list

 * @list: the old list to append

 * @size: size of the new list (always one more than the old list)

 * @new: new node to add to the list

 *

 * Return: pointer to the new list

 */

listint_t **_ra(listint_t **list, size_t size, listint_t *new)

{
  
  listint_t **newlist;
  
  size_t i;
  

  
  newlist = malloc(size * sizeof(listint_t *));
  
  if (newlist == NULL)
    
    {
      
      free(list);
      
      exit(98);
      
    }
  
  for (i = 0; i < size - 1; i++)
    
    newlist[i] = list[i];
  
  newlist[i] = new;
  
  free(list);
  
  return (newlist);
  
}



/**

 * free_listint_safe - frees a listint_t linked list.

 * @head: double pointer to the start of the list

 *

 * Return: the number of nodes in the list

 */

size_t free_listint_safe(listint_t **head)
  
{
  
  size_t i, num = 0;
  
  listint_t **list = NULL;
  
  listint_t *next;
  

  
  if (head == NULL || *head == NULL)
    
    return (num);
  
  while (*head != NULL)
    
    {
      
      for (i = 0; i < num; i++)
	
	{
	  
	  if (*head == list[i])
	    
	    {
	      
	      *head = NULL;
	      
	      free(list);
	      
	      return (num);
	      
	    }
	  
	}
      
      num++;
      
      list = _ra(list, num, *head);
      
      next = (*head)->next;
      
      free(*head);
      
      *head = next;
      
    }
  
  free(list);
  
  return (num);
  
}

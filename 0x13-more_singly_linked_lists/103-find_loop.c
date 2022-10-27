103-find_loop.c.txt

Who has access

A

System properties

Type

Text

Size

668 bytes

Storage used

668 bytes

Location

more_singly_linked_lists -

Owner

Antony Bahati

Modified

24 Oct 2022 by Antony Bahati

Opened

02:44 by me

Created

25 Oct 2022

No description

Viewers can download

#include "lists.h"



/**

 * find_listint_loop - finds the loop in a linked list.

 * @head: pointer to the beginning of the list

 *

 * Return: address of the node where the loop starts or NULL if there's no loop

 */

listint_t *find_listint_loop(listint_t *head)

{
  
  listint_t *tortoise, *hare;
  

  
  tortoise = hare = head;
  
  while (tortoise && hare && hare->next)
    
    {
      
      tortoise = tortoise->next;
      
      hare = hare->next->next;
      
      if (tortoise == hare)
	
	{
	  
	  tortoise = head;
	  
	  break;
	  
	}
      
    }
  
  if (!tortoise || !hare || !hare->next)
    
    return (NULL);
  
  while (tortoise != hare)
    
    {
      
      tortoise = tortoise->next;
      
      hare = hare->next;
      
    }
  
  return (hare);
  
}

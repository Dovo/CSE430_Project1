#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>

struct q
{
    int payload;
	struct q *next;
	struct q *prev;
};

typedef struct q* item;

//default constructor sets payload to 0
item NewItem()
{
	item p = malloc(sizeof(struct q));
printf("%lu ", sizeof(struct q));
	p->payload = 0;
	p->next = NULL;
	p->prev = NULL;
	return p;
}

//set head pointer to point to NULL
void InitQueue(item *head)
{
    *head = NULL;
}

void AddQueue(item *head, item p)
{
    printf("\n\nin add\n");
    
	//if head points to null, set head to point to p
	if(*head == NULL)
	{
printf("head is null\n");
		//head now points to memory location of p
        *head = p;
        
		p->next = p;
		p->prev = p;
        
		printf("after set\n");
		return;
	}
    
	//if queue has 1 node, add after that node
	else if(((*head)->next) == (*head))
	{
printf("only one node\n");
		(*head)->next = p;
        p->next = *head;
        p->prev = *head;
        
        (*head)->prev = p;
		return;
	}

	//if >1 node, iterate to end of list and add then p
	else
	{
printf("over here\n");
        
		item temp = *head;
        
		while(temp->next != *head)
		{
printf("im in the loop yo!\n");
			temp = temp->next;
		}
        
printf("out of loop\n");
		
        //set next item as p, set p->prev to original last item, and
        //p->next to head pointer
        temp->next = p;
		p->prev = temp;
		p->next = *head;
        
        (*head)->prev = p;
		return;
	}
}

item DelQueue(item *head)
{
	//if queue is empty, return null pointer to head
	if(*head == NULL)
	{
		printf("Error: could not delete, queue is empty\n");
		return *head;
	}
    
	//if queue has 1 node, delete that node and return it
	else if((*head)->next == (*head))
	{
		item temp = *head;
        *head = NULL;
		return temp;
	}
    
	//if queue has >1 node, remove head and update head to point to next
	else
	{
        //save head and head's prev pointer (last item in queue)
        item temp = *head;
        item savePrev = (*head)->prev;
        
        //let head point to next node and let head->prev point to previous last element
        *head = temp->next;
        (*head)->prev = savePrev;
        
        //update prev item to point to new head
        savePrev->next = *head;
        
        return temp;
	}
}

void RotateQ(item *head)
{
	*head = (*head)->next;
}

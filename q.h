#include <stdlib.h>
#include <stdio.h>

struct q
{
	int payload;
	struct q *next;
	struct q *prev;
};

typedef struct q item;

//default constructor sets payload to 0
item NewItem()
{
	item *p = malloc(sizeof(item));
	p->payload = 0;
	p->next = NULL;
	p->prev = NULL;
	return *p;
}

void InitQueue(item **head)
{
	*head = NULL;
}

void AddQueue(item **head, item p)
{
	if(*head == NULL)
	{
		*head = &p;
	}

	else
	{
		item *temp = *head;

		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		/*temp->next->payload = p->payload;
		temp->next->next = p->next;
		temp->next->prev = p->prev;*/
		temp->next = &p;
		return;
	}
}

item DelQueue(item **head)
{
	if(*head == NULL)
	{
		printf("Error: could not delete, queue is empty\n");
		return **head;
	}

	else
	{
		item *temp = *head;

		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		return *temp;
	}
}

void RotateQ(item **head)
{
	
}

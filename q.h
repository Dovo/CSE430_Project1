#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>

struct q
{
	int payload;
	struct q *next;
	struct q *prev;
};

typedef struct q *item;

//default constructor sets payload to 0
item NewItem()
{
	item p = malloc(sizeof(item));
	p->payload = 0;
	p->next = NULL;
	p->prev = NULL;
	return p;
}

//set head pointer to point to NULL
void InitQueue(item **head)
{
	*head = NULL;
}

void AddQueue(item **head, item p)
{
	printf("in add\n");
	if(*head == NULL)
	{
		printf("head is null\n");
		*head = &p;

		/*
		(*head)->next = *head;
		(*head)->prev = *head;
		*/

		p->next = p;
		p->prev = p;
		return;
	}

	else
	{
		printf("over here\n");

		item temp = **head;

		while(temp->next != **head)
		{
			printf("im in the loop yo!\n");

			if(temp->next == NULL)
			{
				printf("next is NULL\n");
			}
			temp = temp->next;
		}

		printf("out of loop\n");
		temp->next = p;

		p->prev = temp;
		p->next = **head;
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

	//if queue has 1 node, delete that node
	else if(&(*head)->next == &(*head))
	{
		*head = NULL;
		item temp = *head;
		return temp;
	}

	else
	{
		item temp = *head;

		while(temp->next != *head)
		{
			temp = temp->next;
		}

		temp->next = (*head)->next;
		item temp2 = temp->next;
		temp2->prev = temp;
		return *head;
	}
}

void RotateQ(item **head)
{
	**head = (**head)->next;
}

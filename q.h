#include <stdlib.h>

struct q
{
	int payload;
	struct q* next;
	struct q* prev;
};

typedef struct q item;

item* head;

//default constructor sets payload to 0
item* NewItem()
{
	item* p = malloc(sizeof(item));
	p->payload = 0;
	p->next = NULL;
	p->prev = NULL;
	return p;
}

void InitQueue()
{
	head = NULL;
}

void AddQueue(item* p)
{
	if(head == NULL)
	{
		head = p;
	}

	else
	{
		item* temp = head;

		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = p;
	}
}

item* DelQueue()
{
	if(head == NULL)
	{
		return NULL;
	}

	else
	{
		item* temp = head;

		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		return temp;
	}
}

void RotateQ()
{
	
}

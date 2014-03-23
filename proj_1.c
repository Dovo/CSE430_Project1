#include "q.h"

void expect(int expected, int actual)
{
	if(expected == actual)
	{  
		printf("Passed test. Expected %d, got %d.\n", expected, actual);
	}

	else 
	{ 
		printf("Failed test. Expected %d, got %d.\n", expected, actual);
	}
}

/* test initqueue and correct payload*/
/*void test1()
{
	item *head;
	InitQueue(&head);
	item test = NewItem();
	test->payload = 2;
	AddQueue(&head, test);
	int x = test->payload;

	expect(2, x);
}*/

void test2()
{
	item *head;
	InitQueue(&head);
	item test = NewItem();
	test->payload = 2;

	item test2 = NewItem();
	test2->payload = 5;

	AddQueue(&head, test);
	AddQueue(&head, test2);
}


int main()
{
	test2();

	return 0;
}
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

void test1()
{
	item head;
	InitQueue(&head);
	item *test = NewItem();
	test->payload = 2;
	AddQueue(&head, test);

	int x = head->payload;
	printf("%d\n", x);

	//int x = head->payload;
	//expect(2, x);*/
}

void test2()
{

}


int main()
{
	printf("yo\n");
	test1();

	return 0;
}
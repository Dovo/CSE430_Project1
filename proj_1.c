#include "q.h"
#include <stdio.h>

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
	InitQueue();
	item* test = NewItem();
	test->payload = 2;

	AddQueue(test);

	int x = head->payload;

	expect(2, x);
}

void test2()
{
	
}


int main()
{
	test1();

	return 0;
}
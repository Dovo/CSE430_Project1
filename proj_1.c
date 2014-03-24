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

/*
 
 void InitTest()
 {
 item *head;
 InitQueue(&head);
 item test = NewItem();
 test->payload = 2;
 AddQueue(&head, test);
 int x = test->payload;
 
 expect(2, x);
 }

void AddTest()
{
	item head;
	InitQueue(&head);
	
	item test = NewItem();
	test->payload = 2;
    
	item test2 = NewItem();
	test2->payload = 5;
    
    item test3 = NewItem();
    test3->payload = 7;
    
	AddQueue(&head, test);
	AddQueue(&head, test2);
    AddQueue(&head, test3);
}

void DeleteTest()
{
    item head;
	InitQueue(&head);
	
	item test = NewItem();
	test->payload = 2;
    
	item test2 = NewItem();
	test2->payload = 5;
    
    item test3 = NewItem();
    test3->payload = 7;
    
	AddQueue(&head, test);
	AddQueue(&head, test2);
    AddQueue(&head, test3);

    DelQueue(&head);
}
 
*/

void RotateTest()
{
    item head;
	InitQueue(&head);
	
	item test = NewItem();
	test->payload = 2;
    
	item test2 = NewItem();
	test2->payload = 5;
    
    item test3 = NewItem();
    test3->payload = 7;
    
	AddQueue(&head, test);
	AddQueue(&head, test2);
    AddQueue(&head, test3);
    
    RotateQ(&head);
    RotateQ(&head);
}

int main()
{
	//InitTest();
    //AddTest();
    //DeleteTest();
    RotateTest();
    
	return 0;
}
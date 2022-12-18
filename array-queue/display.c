#include "main.h"

void display()
{
	int i;
	if (front == -1)
	{
		printf("Queue Underflow\n");
	}
	else
	{
		printf("The elements in the queue are: \n");
		for (i = front; i <= rear; i++)
		{
			printf("%d\n", queue[i]);
		}
	}
}

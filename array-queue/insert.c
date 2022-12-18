#include "main.h"

void insert()
{
	int element; /*the element to be inserted*/

	if (rear == LIMIT - 1)
	{
		printf("Queue Overflow\n");
	}
	else if (front == -1)
	{
		front = 0;
		printf("Enter element to insert: ");
		scanf("%d", &element);
		rear++;
		queue[rear] = element;
	}
}

#include "main.h"

void push()
{
	if (top == LIMIT - 1)
	{
		printf("Stack Overflow!\n");
	}
	else
	{
		printf("Enter element to insert: ");
		scanf("%d", &element);
		top++;
		stack[top] = element;
	}
}

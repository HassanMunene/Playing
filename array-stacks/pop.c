#include "main.h"

void pop()
{
	if (top == -1)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		element = stack[top];
		printf("The deleted item is: %d\n", stack[top]);
		top--;
	}
}

#include "main.h"

void display()
{
	node *pointer;

	pointer = temp;
	if (pointer == NULL)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		printf("The elements of the stack are:\n");

		while (pointer != NULL)
		{
			printf("%d\n", pointer -> data);
			pointer = pointer -> next;
		}
	}
}

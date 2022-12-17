#include <stdio.h>
#define LIMIT 100

void main(void)
{
	int stack[LIMIT];
	int element = 1;
	int top = 0;

	/*if (top > LIMIT - 1)
	{
		printf("Stack overflow\n");
	}
	else
	{
		printf("Enter element: ");
		scanf(" %d", &element);
		top++;
		stack[top] = element;
	}*/
	while (top <= LIMIT - 1)
	{
		stack[top] = element;
		printf("[%d][%d] ", top, element);
		top++;
		element++;
	}
	printf("\n");
}

#include "main.h"

void push()
{
	int data;

	/* declare a pointer that will hold the dynamic memory
	 * created using malloc.
	 * The memory will be the size of the struct node
	 */
	node *pointer = malloc(sizeof(struct node));
	if (pointer == NULL)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		printf("Enter the element to be inserted: ");
		scanf("%d", &data);
		
		/*If temp is NULL means that it is not pointing to any memory*/
		if (temp == NULL)
		{
			pointer -> data = data;
			pointer -> next = NULL;
			temp = pointer;
		}
		/*else if pointer has an address pointing to a memory then it means a node memory is already 
		 * available
		 */
		else
		{
			pointer -> data = data;
			pointer -> next = temp;
			temp = pointer;
		}	
	}
}

#include "main.h"

int main(void)
{
	int choice;

	printf("\t\t\t\tWELCOME TO THE PLAYING FIELD\n\n");
	printf("\t\t\t\tIMPLENTATION OF QUEUES USING ARRAYS\n\n");

	/* initialize the front and the rear to indicate that in the 
	 * beginning it is empty
	 */
	rear = front = -1;

	do
	{
		printf("1. Insert\n2.Delete\n3. Display\n4. Exit\n");
		printf("Enter you choic: ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delet();
				break;
			case 3:
				display();
				break;
			case 4:
				exit (0);
				break;
			default:
				printf("Sorry, invalid choice\n");
				break;
		}
	} while (choice != 4);
	return (0);
}

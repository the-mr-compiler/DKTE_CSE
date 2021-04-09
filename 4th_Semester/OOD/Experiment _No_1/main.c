#include <stdio.h>
#include "date.h"
#include "date_fun.h"

int main()
{
	struct date d = setDate();
	int choice;
	while (choice != 6)
	{
		printf("\n1. Accept date\n2. Print address\n3. Display date in multiple formats\n4. Find difference\n5. Increment date\n6. Exit\n\nEnter your choice : ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			d = setDate();
			break;
		case 2:
			print
			break;

		case 3:
			break;

		case 4:
			break;

		case 5:
			break;

		case 6:
			break;
		default:
			break;
		}
	}
}

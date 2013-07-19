#include "input.h"

void
input_card(void)
{
	struct name_card *new;
	new=(struct name_card*)malloc(sizeof(struct name_card));

	printf("\nInput namecard menu : ");
	printf("\n   Input name -> ");
	gets(new->name);

	printf("\n   Input phone number -> ");
	gets(new->phone);

	/* insert at first */
	new->next = head->next;
	head->next = new;
}

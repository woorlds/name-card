#include "delete.h"

int
delete_card(char *value)
{
	struct name_card *temp;
	struct name_card *previous;

	previous = head;
	temp = previous->next;
	while((strcmp(value, temp->name)) != 0 && (temp != tail))
	{
		previous = previous->next;
		temp = previous->next;
	}
	if(temp==tail)
	{
		return 0;
	}
	p->next = temp->next;
	free(temp);
	
	return 1;
}

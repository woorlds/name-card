#include "search.h"

struct name_card
*search_card(char *s)
{
	struct name_card *tmp;

	tmp = head->next;
	while((strcmp(s, tmp->name) != 0) && (tmp!=tail))
	{
		tmp = tmp->next;
	}

	if(tmp==tail)
	{
		/* Not found */
		return NULL;
	}
	else
	{
		return tmp;
	}
}

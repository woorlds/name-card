#include "init.h"

/*
 * Fuction description : name card initialize.
 *
 * Author : Hyunwoo Lee
 */
void
init_card(void)
{
	head=(struct name_card*)malloc(sizeof(struct name_card));
	tail=(struct name_card*)malloc(sizeof(struct name_card));
	head->next=tail;
	tail->next=tail;
}

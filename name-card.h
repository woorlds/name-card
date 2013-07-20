#ifndef NAME_CARD_H
#define NAME_CARD_H

#include <stdio.h>
#include <stdlib.h>

#include "init.h"
#include "input.h"
#include "display.h"
#include "load.h"
#include "save.h"
#include "search.h"
#include "delete.h"

#define NAME_SIZE	21
#define PHONE_SIZE	16
#define REC_SIZE	(NAME_SIZE+PHONE_SIZE)

struct name_card
{
	char name[NAME_SIZE];
	char phone[PHONE_SIZE];
	struct name_card *next;
};

struct name_card *head, *tail;

#endif

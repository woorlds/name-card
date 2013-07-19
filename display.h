#ifndef DISPLAY_H
#define DISPLAY_H

#include "name-card.h"

void display_card(struct name_card *card, FILE *f);
void display_header(FILE *f);

#endif

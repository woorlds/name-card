#include "display.h"

void
display_card(struct name_card *card, FILE *f)
{
	fprintf(f, "\n%-20s    %-15s", card->name, card->phone);
}

void
display_header(FILE *f)
{
	fprintf(f, "\nName           "
			   "Phone number");
	fprintf(f, "------------------"
			   "------------------");
}

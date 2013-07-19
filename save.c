#include "save.h"

void
save_card(char *file_name)
{
	FILE *fp;
	struct name_card *temp;

	if((fp=fopen(file_name, "wb")==NULL))
	{
		printf("\n   Error : Disk write failure.");
		return;
	}

	temp=head->next;
	while(temp!=tail)
	{
		fwrite(temp, REC_SIZE, 1, fp);
		temp=temp->next;
	}
	fclose(fp);
}

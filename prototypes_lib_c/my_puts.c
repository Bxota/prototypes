#include "my_lib.h"

void my_puts(char *str)
{
	int i;
	for(i = 0; i != my_strlen(str); i++)
	{
		my_putchar(str[i]);
	}

	my_putchar('\n');
}
#include "my_lib.h"

int my_atoi(char *str)
{
    int i;  
    int result;
    for (i = 0; i != my_strlen(str); i++)
    {
        if (str[i] >= 49 && str[i] <= 59)
        {
            result = str[i] - (97 - 49);
        }
    }

    return result;
}

int testunit_my_atoi()
{
	if (my_atoi("3") != 3) {
		return -1;
	}

    if (my_atoi("30") != 30) {
		return -1;
	}

    return 1;
}
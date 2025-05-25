#include "my_lib.h"

const char FUNCTIONS[100][100] = 
{
    "my_atoi"
};

const char myChars[100] = { 'h', 'e', 'l', 'l', 'o', '\0' };

void start_test(const char *function_name)
{
    char *func = strcat("testunit_", function_name);
    int (*fun_ptr)() = func;

    (*fun_ptr)();
}

void launch_test()
{
    int i;
    for (i = 0; i != sizeof(FUNCTIONS); i++)
    {
        start_test(FUNCTIONS[i]);
    }
}
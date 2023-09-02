#include "calculator.h"

int is_number(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

unsigned int get_next_token(char *str, char *token, int *t)
{
    unsigned int i;

    i = 0;
}

int is_prior()
{

}

char    *get_post_fix(char *str)
{
    int     length;
    s_stack *stack;


    length = strlen(str);
    while (position < length)
    {
        position += get_next_token();
    }
    
}

double  calculate()
{
    
}
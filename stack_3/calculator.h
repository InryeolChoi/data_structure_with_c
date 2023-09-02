#ifndef CALCULATOR_H
# define CALCULATOR_H

# include <stdio.h>
# include <stdlib.h>
# include "linkedstack.h"

typedef enum
{
    LEFT_BRAC = '(',
    RIGHT_BRAC = ')',
    PLUS = '+',
    MINUS = '-',
    MULTIPLY = '*',
    DIVISION = '/',
    SPACE = ' ',
    OPERATOR
}   SYMBOL;

int             is_number(char c);
unsigned int    get_next_token(char *str, char *token, int *t);
int             is_prior();
char            *get_post_fix(char *str);
double          calculate();

#endif

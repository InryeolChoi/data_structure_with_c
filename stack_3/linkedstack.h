#ifndef LINKED_STACK_H
# define LINKED_STACK_H

typedef struct node
{
    char        *data;
    struct node *next;
}   s_node;

typedef struct linkedlist_stack
{
    s_node  *list;
    s_node  *top;
}   s_stack;

void    createstack(s_stack **stack);
void    destroystack(s_stack *stack);
s_node  *createnode(char *str);
void    destroynode(s_node *node);
void    push(s_stack *stack, s_node *node);
s_node  *pop(s_stack *stack);
s_node  *top(s_stack *stack);
int     getsize(s_stack *stack);
int     isempty(s_stack *stack);

# include <stdlib.h>
# include <stdio.h>
# include <string.h>

#endif
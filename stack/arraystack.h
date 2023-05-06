#ifndef ARRAYSTACK_H
# define ARRAYSTACK_H

# include <stdlib.h>
# include <stdio.h>

typedef struct node
{
    int data;
}   t_node;

typedef struct stack
{
    int     capacity;
    int     top;
    t_node  *nodes;
}   t_stack;

void createstack(t_stack **stack, int capacity);
void destroystack(t_stack *stack);
void push(t_stack *stack, int data);
int pop(t_stack *stack);
int gettop(t_stack *stack);
int getsize(t_stack *stack);
int isempty(t_stack *stack);

#endif
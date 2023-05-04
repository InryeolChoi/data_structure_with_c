#ifndef RINGLIST_h
# define RINGLIST_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_node
{
    int data;
    struct s_node *before;
    struct s_node *next;
}   t_node;

t_node  *createnode(int x);
void    deletenode(t_node *node);
void    appendnode(t_node **head, t_node *node);
void    insertnode(t_node *curnode, t_node *node);
void    removenode(t_node **list, t_node *node);
t_node  *findnode(t_node *node, int location);
int     countnode(t_node *head);

#endif
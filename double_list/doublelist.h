#ifndef LIST_H
# define LIST_H

typedef struct s_node
{
    int data;
    struct s_node *next;
    struct s_node *before;
}   t_node;

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>

t_node  *createnode(int x);
void    deletenode(t_node *node);
void    appendnode(t_node **head, t_node *newnode);
t_node  *findnode(t_node *head, int location);
void    removenode(t_node **head, t_node *node);
void    insertnode(t_node *current, t_node *node);
int     countnode(t_node *head);

#endif
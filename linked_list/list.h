#ifndef LIST_H
# define LIST_H

# include <stdio.h>
# include <stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
}   s_node;

s_node  *createnode(int x);
void    deletenode(s_node *node);
void    appendnode(s_node **head, s_node *newnode);
s_node  *searchnode(s_node *node, int v);
void    remove_one(s_node **head, s_node *node);
void    insert_one(s_node *current, s_node *node);
int     countnode(s_node *head);

#endif
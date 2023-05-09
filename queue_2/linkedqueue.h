#ifndef LINKEDQUEUE_H
# define LINKEDQUEUE_H

typedef struct node
{
    char        *data;
    struct node *next;
}   s_node;

typedef struct linkedqueue
{
    s_node  *front;
    s_node  *rear;
    int     count;
}   s_queue;

# include <stdlib.h>
# include <stdio.h>

void    createqueue(s_queue **queue);
void    destroyqueue(s_queue *queue);
s_node  *createnode(char *str);
void    destroynode(s_node *node);
void    enqueue(s_queue *queue, s_node *node);
s_node  *dequeue(s_queue *queue);
int     getcount(s_queue *queue);
int     isempty(s_queue *queue);
#endif
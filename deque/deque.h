#ifndef DEQUE_H
# define DEQUE_H

# include <stdlib.h>
# include <stdio.h>

typedef struct node
{
    char        *data;
    struct node *before;
    struct node *next;
}   s_node;

typedef struct deque
{
    s_node  *front; // 전단 노드
    s_node  *rear;  // 후단 노드
    int     count;  // 노드 갯수
}   s_deque;

s_deque *create_deque();
void    delete_deque(s_deque *deque);
s_node  *create_node(char *str);
void    delete_node(s_node *node);
int     isempty(s_deque *deque);
void    push_front(s_deque *deque, s_node *node);
void    push_rear(s_deque *deque, s_node *node);
s_node  *pop_front(s_deque *deque);
s_node  *pop_rear(s_deque *deque);



#endif
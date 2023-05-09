#include "deque.h"

// 덱 생성
s_deque *create_deque()
{
    s_deque *deque;

    deque = (s_deque *)malloc(sizeof(s_deque));
    if (!deque)
        return (NULL);
    deque->front = NULL;
    deque->rear = NULL;
    deque->count = 0;
    return (deque);
}

// 덱 삭제
void    delete_deque(s_deque *deque)
{
    s_node  *curnode;
    s_node  *nextnode;

    curnode = deque->front;
    while (curnode)
    {
        nextnode = curnode->next;
        free(curnode);
        curnode = nextnode;
    }
    free(deque);
}

// 노드 생성
s_node  *create_node(char *str)
{
    s_node  *newnode;

    newnode = (s_node *)malloc(sizeof(s_node));
    newnode->data = str;
    newnode->before = NULL; 
    newnode->next = NULL;
    return (newnode);
}

// 노드 제거
void    delete_node(s_node *node)
{
    free(node);
}

// 공백상태 체크
int isempty(s_deque *deque)
{
    return (deque->count == 0);
}

// 노드 삽입 : front
void    push_front(s_deque *deque, s_node *node)
{
    if (isempty(deque))
    {
        deque->front = node;
        deque->rear = node;
    }
    else
    {
        node->next = deque->front;
        deque->front->before = node;
        deque->front = node;
    }
    deque->count++;
}

// 노드 삽입 : rear
void    push_rear(s_deque *deque, s_node *node)
{
    if (isempty(deque))
    {
        node->before = NULL;
        node->next = NULL;
        deque->front = node;
        deque->rear = node;
    }
    else
    {
        node->before = deque->rear;
        deque->rear->next = node;
        deque->rear = node;
    }
    deque->count++;
}

// 노드 삭제 : front
s_node  *pop_front(s_deque *deque)
{
    s_node  *node;

    if (isempty(deque))
        return (NULL);
    node = deque->front;
    if (deque->count == 1)
    {
        deque->front = NULL;
        deque->rear = NULL;
    }
    else
    {
        deque->front = node->next;
        deque->front->before = NULL;
    }
    node->before = NULL;
    deque->count--;
    return (node);
}

// 노드 삭제 : rear
s_node  *pop_rear(s_deque *deque)
{
    s_node  *node;

    if (isempty(deque))
        return (NULL);
    node = deque->rear;
    if (deque->count == 1)
    {
        deque->front = NULL;
        deque->rear = NULL;
    }
    else
    {
        deque->rear = node->before;
        deque->rear->next = NULL;
    }
    node->next = NULL;
    deque->count--;
    return (node);
}

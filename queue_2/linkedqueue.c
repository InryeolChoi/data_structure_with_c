#include "linkedqueue.h"

// 큐 생성
void createqueue(s_queue **queue)
{
    // 큐 생성
    (*queue) = (s_queue *)malloc(sizeof(s_queue));

    // 큐 내부 초기화 
    (*queue)->front = NULL;
    (*queue)->rear = NULL;
    (*queue)->count = 0;
}

// 큐 삭제
void destroyqueue(s_queue *queue)
{
    s_node *popped;

    while (!isempty(queue))
    {
        popped = dequeue(queue);
        destroynode(popped);
    }
    free(queue);
}

// 노드 생성
s_node  *createnode(char *str)
{
    s_node *newnode;

    newnode = (s_node *)malloc(sizeof(s_node));
    newnode->data = str;
    newnode->next = NULL;
    return (newnode);
}

// 노드 삭제
void    destroynode(s_node *node)
{
    free(node);
}

// 노드 삽입
void enqueue(s_queue *queue, s_node *node)
{
    if (queue->front == NULL)
    {
        queue->front = node;
        queue->rear = node;
    }
    else
    {
        queue->rear->next = node;
        queue->rear = node;
    }
    queue->count++;
}

// 노드 제거
s_node *dequeue(s_queue *queue)
{
    s_node *node;

    node = queue->front;
    if (node->next == NULL)
    {
        queue->front = NULL;
        queue->rear = NULL;
    }
    else
        queue->front = node->next;
    return (node);
}

// 노드 갯수 세기
int getcount(s_queue *queue)
{
    return (queue->count);
}

// 큐 확인
int isempty(s_queue *queue)
{
    return (queue->front == NULL);  
}
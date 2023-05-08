#ifndef QUEUE_H
# define QUEUE_H

# include <stdlib.h>
# include <stdio.h>

typedef struct node
{
    int data;
}   s_node;

typedef struct queue
{
    int     capacity;   // 큐의 용량
    int     front;      // 전단 인덱스 (제일 먼저)
    int     rear;       // 후단 인덱스 (제일 나중)
    s_node  *nodes;     // 노드의 배열
}   s_queue;

void    createqueue(s_queue **queue, int capacity);
void    destroyqueue(s_queue *queue);
void    enqueue(s_queue *queue, int data);
int     dequeue(s_queue *queue);
int     isempty(s_queue *queue);
int     isfull(s_queue *queue);
int     getsize(s_queue *queue);

#endif
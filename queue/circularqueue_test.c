#include "circularqueue.h"

int main()
{
    int     x;
    s_queue *queue;

    createqueue(&queue, 10);
    for (int i = 0; i < 4; i++)
        enqueue(queue, i);
    
    for (int i = 0; i < 4; i++)
    {
        printf("Dequeue : %d\t", dequeue(queue));
        printf("front : %d\t", queue->front);
        printf("rear : %d\n", queue->rear);
    }

    x = 100;
    while (isfull(queue) == 0)
        enqueue(queue, x++);

    printf("capacity : %d ", queue->capacity);
    printf("size : %d\n\n", getsize(queue));

    while (isempty(queue) == 0)
    {
        printf("Dequeue : %d\t", dequeue(queue));
        printf("front : %d\t", queue->front);
        printf("rear : %d\n", queue->rear);
    }

    destroyqueue(queue);
}
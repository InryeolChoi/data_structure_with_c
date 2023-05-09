#include "linkedqueue.h"

int main()
{
    s_queue *queue;
    s_node  *node;
    s_node  *popped;
    int     i;

    createqueue(&queue);
    enqueue(queue, createnode("사쿠라"));
    enqueue(queue, createnode("채원"));
    enqueue(queue, createnode("윤진"));
    enqueue(queue, createnode("카즈하"));
    enqueue(queue, createnode("은채"));
    printf("queue size = %d\n\n", getcount(queue));

    i = 0;
    while (!isempty(queue))
    {
        popped = dequeue(queue);
        printf("%d : %s\n", i, popped->data);
        destroynode(popped);
        i++;
    }
    destroyqueue(queue);
}
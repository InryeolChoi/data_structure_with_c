#include "circularqueue.h"

// 큐 생성
void    createqueue(s_queue **queue, int capacity)
{
    // 큐를 생성
    (*queue) = (s_queue *)malloc(sizeof(s_queue));
    
    // 노드의 갯수 = capacity + 1
    (*queue)->nodes = (s_node *)malloc(sizeof(s_node) * (capacity + 1));
    
    (*queue)->capacity = capacity;
    (*queue)->front = 0;
    (*queue)->rear = 0;
}

// 큐 소멸
void    destroyqueue(s_queue *queue)
{
    free(queue->nodes);
    free(queue);
}

// 노드 삽입
void enqueue(s_queue *queue, int data)
{
    int position;

    position = 0;
    if (queue->rear == queue->capacity)
    {
        position = queue->rear; // 위치 설정
        queue->rear = 0;        // rear가 다시 맨 앞으로
    }
    else
        position = queue->rear++;
    queue->nodes[position].data = data;
}

// 노드 제거
int dequeue(s_queue *queue)
{
    int position = queue->front;            // 제거 대상의 인덱스

    if (queue->front == queue->capacity)
        queue->front = 0;                   // 다시 맨 앞으로
    else
        queue->front++;                     // 한 칸 땡기기
    return (queue->nodes[position].data);
}

// 공백 상태 확인
int isempty(s_queue *queue)
{
    // front와 rear가 같음.
    return (queue->front == queue->rear);
}

// 포화 상태 확인
int isfull(s_queue *queue)
{
    if (queue->front < queue->rear)
        return (queue->rear - queue->front == queue->capacity);
    else
        return (queue->rear + 1 == queue->front);
}

// 갯수 세기
int getsize(s_queue *queue)
{
    int front = queue->front; 
    int rear = queue->rear;
    int capacity = queue->capacity;
    int result;

    if (front <= rear)
        return (rear - front);
    else
    {
        result = rear + capacity - front + 1;
        return (result);
    }
}
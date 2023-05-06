#include "arraystack.h"

// 스택 및 노드 생성
void createstack(t_stack **stack, int capacity)
{
    // 반환값이 없으므로, 포인터로 stack을 보내줌.
    (*stack) = (t_stack *)malloc(sizeof(t_stack));

    // 노드의 배열을 만든다고 생각.
    (*stack)->nodes = (t_node *)malloc(sizeof(t_node) * capacity);
    
    // capacity, top 초기화
    (*stack)->capacity = capacity;
    (*stack)->top = -1;
}

// 스택 및 노드 소멸
void destroystack(t_stack *stack)
{
    // 노드 소멸
    free(stack->nodes);
    
    // 스택 소멸
    free(stack);
}

// 노드 삽입
void push(t_stack *stack, int data)
{
    // 0번째에 넣어야 함.
    stack->top++;
    stack->nodes[stack->top].data = data;
}

// 노드 제거
int pop(t_stack *stack)
{
    // 최상단 노드의 인덱스 줄이기
    int position = stack->top--;
    return (stack->nodes[position].data);
}

// 최상단 노드 데이터 반환
int gettop(t_stack *stack)
{
    int top = stack->top;
    return (stack->nodes[top].data);
}

// 스택 사이즈 반환
int getsize(t_stack *stack)
{
    int x = stack->top;
    return (x + 1);
}

// 스택 내부 체크
int isempty(t_stack *stack)
{
    return (stack->top == -1);
}
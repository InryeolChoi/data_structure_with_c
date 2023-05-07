#include "linkedstack.h"

// 스택 생성
void    createstack(s_stack **stack)
{
    (*stack) = (s_stack *)malloc(sizeof(s_stack));
    (*stack)->list = NULL;
    (*stack)->top = NULL;
}

// 스택 삭제
void    destroystack(s_stack *stack)
{
    s_node  *popped;

    while (!isempty(stack))
    {
        popped = pop(stack);
        destroynode(popped);
    }
    free(stack);
}

// 노드 생성
s_node  *createnode(char *str)
{
    s_node *node;
    node = (s_node *)malloc(sizeof(s_node));
    node->data = (char *)malloc(strlen(str) + 1);

    strcpy(node->data, str);
    node->next = NULL;
    return (node);
}

// 노드 삭제
void    destroynode(s_node *node)
{
    free(node->data);
    free(node);
}

// 노드 삽입
void    push(s_stack *stack, s_node *node)
{
    if (stack->list == NULL)
        stack->list = node;
    else
        stack->top->next = node;
    stack->top = node;
}

// 노드 뽑기
s_node *pop(s_stack *stack)
{
    s_node *top = stack->top;
    if (stack->list == stack->top)
    {
        stack->list = NULL;
        stack->top = NULL;
    }
    else
    {
        s_node *current_top = stack->list;
        while (current_top != NULL && current_top->next != stack->top)
            current_top = current_top->next;
        
        stack->top = current_top;
        stack->top->next = NULL;
    }

    return (top);
}

// 최상위 노드 반환
s_node  *top(s_stack *stack)
{
    return (stack->top);
}

// 스택 크기 확인
int getsize(s_stack *stack)
{
    int count = 0;
    s_node *cur = stack->list;
    while (cur != NULL)
    {
        cur = cur->next;
        count++;
    }
    return (count);
}

// 빈 스택 확인
int isempty(s_stack *stack)
{
    return (stack->list == NULL);
}

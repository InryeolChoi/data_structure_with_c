#include "arraystack.h"

int main()
{
    t_stack *stack = NULL;
    createstack(&stack, 10);

    push(stack, 3);
    push(stack, 37);
    push(stack, 11);
    push(stack, 12);

    printf("capacity : %d\n", stack->capacity);
    printf("size : %d\n", getsize(stack));
    printf("Top : %d\n", gettop(stack));

    for (int i = 0; i < 4; i++)
    {
        if (isempty(stack))
            break;

        printf("popped : %d\t", pop(stack));
        if (!isempty(stack))
            printf("current top : %d\n", gettop(stack));
        else
            printf("Stack is empty.\n");
    }
    destroystack(stack);
}
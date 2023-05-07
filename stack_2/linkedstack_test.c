#include "linkedstack.h"

int main()
{
    int     count;
    s_stack *stack;
    s_node  *topnode;
    char    *str;

    createstack(&stack);
    push(stack, createnode("유진"));
    push(stack, createnode("가을"));
    push(stack, createnode("레이"));
    push(stack, createnode("원영"));
    push(stack, createnode("리즈"));
    push(stack, createnode("이서"));

    count = getsize(stack);
    topnode = top(stack);
    char *topstr = topnode->data;
    printf("size : %d, top : %s\n\n", count, topstr);

    for (int i = 0; i < count; i++)
    {
        s_node *popped = pop(stack);
        printf("popped : %s\t", popped->data);
        destroynode(popped);
        
        if (!isempty(stack))
            printf("current top : %s\n", top(stack)->data);
        else
            printf("stack is empty\n");
    }
    destroystack(stack);
}
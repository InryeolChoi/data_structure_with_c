#include "deque.h"

int main()
{
    s_deque *deque;
    char    *str;

    deque = create_deque();
    push_front(deque, create_node("유진"));
    push_front(deque, create_node("원영"));
    push_front(deque, create_node("가을"));
    push_front(deque, create_node("이서"));
    push_front(deque, create_node("레이"));
    push_rear(deque, create_node("아이브"));
    push_front(deque, create_node("리즈"));

    while (deque->count != 0)
    {
        str = pop_rear(deque)->data;
        printf("%s\n", str);
    }

    delete_deque(deque);
}
#include "list.h"

int main()
{
    int count = 0;
    s_node  *list = NULL;
    s_node  *newnode = NULL;

    // 노드 5개 만들기
    for (int i = 0; i < 5; i++) {
        newnode = createnode(rand() % 9);
        appendnode(&list, newnode);
    }

    // 3번째 노드 뒤에 새 노드 삽입
    s_node *third = NULL;
    third = searchnode(list, 3);
    newnode = createnode(rand() % 9);
    insert_one(third, newnode);

    // 리스트 출력하기
    s_node *current = NULL;
    count = countnode(list);
    for (int x = 0; x < count; x++)
    {
        current = searchnode(list, x);
        printf("list[%d] = %d\n", x, current->data);
    }

    // 모든 노드 제거
    count = countnode(list);
    for (int x = 0; x < count; x++)
    {
        current = searchnode(list, x);
        if (current != NULL)
        {
            remove_one(&list, current);
            deletenode(current);
        }
    }
}
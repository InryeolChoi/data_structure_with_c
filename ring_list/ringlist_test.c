#include "ringlist.h"

static void print_node(t_node *ringlist)
{
    int     count = countnode(ringlist);
    t_node  *node = NULL;
    for (int i = 0; i < count; i++)
    {
        node = findnode(ringlist, i);
        printf("list[%d] = %d\n", i, node->data);
    }
    printf("\n");
}

int main()
{
    t_node  *ringlist = NULL;
    t_node  *newnode = NULL;
    t_node  *curnode = NULL;

    // 노드 5개 추가
    for (int i = 0; i < 5; i++)
    {
        newnode = createnode(i);
        appendnode(&ringlist, newnode);
    }

    // 리스트노드 출력
    print_node(ringlist);

    // 리스트 세 번째 칸 뒤에 노드 삽입
    curnode = findnode(ringlist, 2);
    newnode = createnode(8);
    insertnode(curnode, newnode);

    // 리스트노드 출력
    print_node(ringlist);
}

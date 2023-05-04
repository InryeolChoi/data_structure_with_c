#include "doublelist.h"

static void    print_node(t_node *d_list, t_node *curnode)
{
    int n = countnode(d_list);
    for (int i = 0; i < n; i++)
    {
        curnode = findnode(d_list, i);
        printf("list[%d] = %d\n", i, curnode->data);     
    }
    printf("\n");
}

int main()
{
    int n = 0;
    t_node  *d_list = NULL;
    t_node  *newnode = NULL;
    t_node  *curnode = NULL;

    // 노드 5개 추가
    for (int i = 0; i < 5; i++)
    {
        newnode = createnode(i);
        appendnode(&d_list, newnode);
    }

    // 리스트 출력
    print_node(d_list, curnode);

    // 3번째 칸 뒤에 노드 삽입
    newnode = createnode(8);
    curnode = findnode(d_list, 3);
    insertnode(curnode, newnode);

    // 리스트 출력
    print_node(d_list, curnode);

    // 모든 노드 제거
    n = countnode(d_list);
    for (int i = 0; i < n; i++)
    {
        curnode = findnode(d_list, 0);
        if (curnode != NULL)
        {
            removenode(&d_list, curnode);
            deletenode(curnode);
        }
    }
}
#include "ringlist.h"

// 생성
t_node  *createnode(int x)
{
    t_node *newnode = (t_node *)malloc(sizeof(t_node));
    newnode->data = x;
    newnode->before = NULL;
    newnode->next = NULL;
}

// 파괴
void    deletenode(t_node *node)
{
    free(node);
}

// 삽입 (맨 끝)
void    appendnode(t_node **head, t_node *node)
{
    // 연결리스트 안에 아무것도 없을 때
    if (*head == NULL) 
    {
        *head = node;
        (*head)->next = (*head);
        (*head)->before = (*head);
        return ;
    }

    // 연결리스트 안에 노드가 이미 있을 때
    t_node  *tail = (*head)->before;

    tail->next->before = node;
    tail->next = node;

    node->next = (*head);
    node->before = tail;
}

// 삽입 (중간)
void    insertnode(t_node *curnode, t_node *node)
{
    node->next = curnode->next;
    node->before = curnode;

    if (curnode->next != NULL)
    {
        curnode->next->before = node;
        curnode->next = node;
    }
}

// 삭제
void    removenode(t_node **list, t_node *node)
{
    t_node *cur = (*list);
    if (cur == node)
    {
        cur->next->before = node->before;
        cur->before->next = node->next;

        cur = node->next;
        node->next = NULL;
        node->before = NULL;
        return ;
    }
    node->before->next = node->next;
    node->next->before = node->before;

    node->next = NULL;
    node->before = NULL;
}


// 탐색
t_node  *findnode(t_node *node, int location)
{
    while (node != NULL && (--location) >= 0)
        node = node->next;
    return (node);
}

// 갯수세기
int countnode(t_node *head)
{
    unsigned int    n = 0;
    t_node          *cur = head;

    while (cur != NULL)
    {
        cur = cur->next;
        n++;
        if (cur == head)
            break;
    }
    return (n);
}

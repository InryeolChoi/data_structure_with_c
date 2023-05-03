#include "list.h"

// 생성
s_node  *createnode(int x)
{
    s_node  *newnode;
    newnode = (s_node *)malloc(sizeof(s_node));
    newnode->data = x;
    newnode->next = NULL;

    return (newnode);
}

// 소멸
void    deletenode(s_node *node)
{
    free(node);
}

// 추가
void    appendnode(s_node **head, s_node *newnode)
{
    if (*head == NULL)
    {
        *head = newnode;
        return ;
    }

    s_node  *tail = (*head);
    while (tail->next != 0)
        tail = tail->next;
    tail->next = newnode;
}

// 탐색
s_node  *searchnode(s_node *node, int v)
{
    while (node->next != NULL && v >= 0)
    {
        node = node->next;
        v--;
    }
    return (node);
}

// 삭제 (특정 노드 한 개)
void    remove_one(s_node **head, s_node *node)
{
    if (*head == node)
        *head = node->next;
    else
    {
        s_node *current = *head;
        while (current != NULL && current->next != node)
            current = current->next;
        if (current != NULL)
            current->next = node->next;
    }
}

// 삽입 (특정 노드 한 개)
void    insert_one(s_node *current, s_node *node)
{
    node->next = current->next;
    current->next = node; 
}

// 갯수세기
int countnode(s_node *head)
{
    int count = 0;
    s_node  *current = head;

    while (current->next != NULL)
    {
        current = current->next;
        count++;
    }
    return (count);
}
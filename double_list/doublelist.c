#include "doublelist.h"

// 생성
t_node  *createnode(int x)
{
    t_node  *newnode;
    newnode = (t_node *)malloc(sizeof(t_node));

    newnode->data = x;
    newnode->next = NULL;
    newnode->before = NULL;

    return (newnode);
}

// 삭제
void    deletenode(t_node *node)
{
    free(node);
}

// 노드 삽입 (맨 뒤)
void    appendnode(t_node **head, t_node *newnode)
{
    if ((*head) == NULL)
    {
        *head = newnode;
        return ;
    }
    t_node  *last = (*head);
    while (last->next != NULL)
        last = last->next;
    last->next = newnode;
    newnode->before = last;
}

// 노트 탐색 연산
t_node  *findnode(t_node *head, int location)
{
    while (head != NULL && location-- > 0)
        head = head->next;
    return (head);
}

// 노드 삭제
void    removenode(t_node **head, t_node *node)
{
    // 맨 앞이 해당 노드일때
    if (*head == node) 
    {
        *head = node->next;
        if (node == NULL)
            (*head)->before = NULL;
        node->before = NULL;
        node->next = NULL;
        return ;
    }

    // 그 외 상황            
    if (node->before != NULL) 
        node->before->next = node->next;
    if (node->next != NULL)
        node->next->before = node->before;
    node->before = NULL;
    node->next = NULL;
}

// 노드 삽입 (특정 위치)
void    insertnode(t_node *current, t_node *node)
{
    node->next = current->next;
    node->before = current;

    if (current->next != NULL)
    {
        current->next->before = node;
        current->next = node;
    }
}

// 노드 갯수 세기
int countnode(t_node *head)
{
    unsigned int    count = 0;
    t_node          *current = head;
    while (current != NULL)
    {
        current = current->next;
        count++;
    }
    return (count);
}

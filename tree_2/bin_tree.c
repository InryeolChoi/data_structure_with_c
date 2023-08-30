#include "bin_tree.h"

t_node *create_node(char *str)
{
    t_node *node;

    node = malloc(sizeof(t_node));
    if (!node)
        return (NULL);
    node->left = NULL;
    node->right = NULL;
    node->data = str;
    return (node);
}

void    destroy_node(t_node *node)
{
    free(node);
}

void    preorder_print(t_node *node)
{
    if (node == NULL)
        return ;
    printf(" %s", node->data);
    preorder_print(node->left);
    preorder_print(node->right);
}

void    inorder_print(t_node *node)
{
    if (node == NULL)
        return ;
    inorder_print(node->left);
    printf(" %s", node->data);
    inorder_print(node->right);
}

void    postorder_print(t_node *node)
{
    if (node == NULL)
        return ;
    postorder_print(node->left);
    postorder_print(node->right);
    printf(" %s", node->data);
}

void    destory_tree(t_node *root)
{
    if (root == NULL)
        return ;
    destory_tree(root->left);
    destory_tree(root->right);
    free(root);
}

#ifndef BINARY_TREE_H
# define BINARY_TREE_H

# include <stdlib.h>
# include <stdio.h>

typedef struct  s_node
{
    struct s_node   *left;
    struct s_node   *right;
    char            *data;
}   t_node;

t_node  *create_node(char *str);
void    destroy_node(t_node *node);
void    preorder_print(t_node *node);
void    inorder_print(t_node *node);
void    postorder_print(t_node *node);
void    destory_tree(t_node *root);

#endif
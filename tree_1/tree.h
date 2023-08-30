#ifndef TREE_H
# define TREE_H

# include <stdlib.h>
# include <stdio.h>

typedef struct  s_tree
{
    struct s_tree  *left;
    struct s_tree  *right;
    char           *data;
}   t_tree;

t_tree  *create_node(char *data);
void    destroy_node(t_tree *node);
void    destroy_tree(t_tree *root);
void    add_childtree(t_tree *parent, t_tree *child);
void    print_tree(t_tree *node, int depth);

#endif
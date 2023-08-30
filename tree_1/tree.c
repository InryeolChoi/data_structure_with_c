#include "tree.h"

t_tree  *create_node(char *data)
{
    t_tree *tree;

    tree = (t_tree *)malloc(sizeof(t_tree));
    if (!tree)
        return (NULL);
    
    tree->left = NULL;
    tree->right = NULL;
    tree->data = data;
    return (tree);
}

void    destroy_node(t_tree *node)
{
    free(node);
}

void    destroy_tree(t_tree *root)
{
    if (root->right != NULL)
        destroy_tree(root->right);

    if (root->left != NULL)
        destroy_tree(root->left);

    root->left = NULL;
    root->right = NULL;
    destroy_node(root);
}

void    add_childtree(t_tree *parent, t_tree *child)
{
    t_tree *curnode;

    if (parent->left == NULL)
        parent->left = child;
    else
    {
        curnode = parent->left;
        while (curnode->right != NULL)
            curnode = curnode->right;
        curnode->right = child;
    }
}

void    print_tree(t_tree *node, int depth)
{
    int i;

    for (i = 0; i < depth - 1; i++)
        printf("   ");
    
    if (depth > 0)
        printf("+--");

    printf("%s\n", node->data);

    if (node->left != NULL)
        print_tree(node->left, depth + 1);

    if (node->right != NULL)
        print_tree(node->right, depth);

}
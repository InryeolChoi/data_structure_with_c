#include "bin_tree.h"

int main()
{
    t_node  *node1 = create_node("A");
    t_node  *node2 = create_node("B");
    t_node  *node3 = create_node("C");
    t_node  *node4 = create_node("D");
    t_node  *node5 = create_node("E");
    t_node  *node6 = create_node("F");
    t_node  *node7 = create_node("G");

    node1->left = node2;
    node2->left = node3;
    node3->right = node4;

    node1->right = node5;
    node5->left = node6;
    node5->right = node7;

    printf("preorder\n");
    preorder_print(node1);
    printf("\n\n");

    printf("inorder\n");
    inorder_print(node1);
    printf("\n\n");

    printf("postorder\n");
    postorder_print(node1);
    printf("\n\n");
}
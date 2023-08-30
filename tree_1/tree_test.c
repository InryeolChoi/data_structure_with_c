#include "tree.h"

int main()
{
    t_tree *root = create_node("A");
    t_tree *tree1 = create_node("B");
    t_tree *tree2 = create_node("C");
    t_tree *tree3 = create_node("D");
    t_tree *tree4 = create_node("E");
    t_tree *tree5 = create_node("F");
    t_tree *tree6 = create_node("G");
    t_tree *tree7 = create_node("H");
    t_tree *tree8 = create_node("I");
    t_tree *tree9 = create_node("J");
    t_tree *tree10 = create_node("K");

    add_childtree(root, tree1);
        add_childtree(tree1, tree2);
        add_childtree(tree1, tree3);
            add_childtree(tree3, tree4);
            add_childtree(tree3, tree5);

    add_childtree(root, tree6);
        add_childtree(tree6, tree7);

    add_childtree(root, tree8);
        add_childtree(tree8, tree9);
            add_childtree(tree9, tree10);

    print_tree(root, 0);
    destroy_tree(root);
}
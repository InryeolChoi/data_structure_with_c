#ifndef NUMTREE_H
# define NUMTREE_H

typedef struct s_postfix
{
    struct s_infix  *next;
    char            *origin;
    char            c;
    long long       n;
}   t_post;

typedef struct  s_node
{
    struct s_node   *left;
    struct s_node   *right;
    char            *data;
}   t_node;

t_post  *init_post(char *str);

#endif
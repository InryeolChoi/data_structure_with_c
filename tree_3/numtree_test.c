#include "numtree.h"

int main(int ac, char **av)
{
    t_post  *postfix;

    if (ac == 2)
    {
        postfix = init_post(av[1]);
        init_numtree(postfix);
    }
}
#include "numtree.h"

count_total()
{

}

t_post  *init_post(char *str)
{
    int total = count_total();
    t_post *post = malloc(sizeof(t_post) * total);
    if (!post)
        return (NULL);

    t_post *cur = post;
    int i = 0;
    int start, end;
    while (str[i] && i < total)
    {
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        start = i;
        while (str[i] && str[i] != ' ' && str[i] != '\t')
            i++;
        end = i;
        cur->origin = get_data();
        cur = cur->next;
    }
    cur = post;
    i = 0;
    while (i < total)
    {

    }
    return (post);
}
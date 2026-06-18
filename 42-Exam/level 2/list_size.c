#include "ft_list.h"

int ft_list_size(t_list *begin)
{
    int i = 0;

    while (begin)
    {
        begin = begin->next;
        i++;
    }
    return (i);
}
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int cnt;
    t_list  *next_ptr;

    cnt = 0;
    next_ptr = begin_list;
    while(next_ptr)
    {
        cnt++;
        next_ptr = next_ptr->next;
    }
    return (cnt);
}
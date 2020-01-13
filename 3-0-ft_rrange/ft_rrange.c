#include <stdio.h>
#include <stdlib.h>

unsigned int ft_int_abs(int start, int end)
{
    unsigned int range;
    range = (start >= end) ? (start - end) : (end - start);
    return (range);
 }


int *ft_rrange(int start, int end)
{
    int i;
    int *ptr;

    i = 0;
    unsigned int range;

    range = ft_int_abs(start, end);
    ptr = (int *)malloc(sizeof(int) * (range + 1));
    while ( start != end )
    {
        ptr[i] = end;
        if ( start >= end)
            end++;
        else
            end--;
        i++;
    }
    ptr[i] = end;
    return (ptr);
}

int main (void)
{
    int str;
    int end;
    int *ptr;
    unsigned int i;
    unsigned int len;

    str = 0;
    end = -3;
    len = ft_int_abs(str,end) + 1;

    ptr = ft_rrange(str, end);
    i = 0; 
    while(i < len )
    {
        printf("%d, ", ptr[i]);
        i++;
    }

}
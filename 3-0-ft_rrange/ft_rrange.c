#include <stdlib.h>
#include <unistd.h>

int *ft_rrange(int start, int end)
{
    int size;
    int *ret;
    int i;

    i = 0;
    if (start > end)
        size = start - end + 1;
    else
        size = end - start + 1;
    ret = (int *)malloc(sizeof(int) * size);
    if (ret == NULL)
        return (NULL);
    while (i < size)
    {
        if (start < end)
        {
            ret[i] = end - i; 
        }
        else
        {
            ret[i] = end + i;
        }
        i++;
    }
    return (ret);
}

int main(void)
{
    int *ptr;
    int size;

    ptr = ft_rrange(1, 3);
    size = 3;
    write(1, "{", 1);
    write(1, &*ptr, size);
    write(1, "}\n", 2);
    free(ptr);
    return (0);
}
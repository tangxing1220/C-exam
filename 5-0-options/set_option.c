#include "option.h"

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

void set_option(int *option, char *arg)
{
    int tmp;
    int len;
    int i;

    len = ft_strlen(arg);
    i = 1;
    while(i < len)
    {
        tmp = 1;
        tmp = tmp << ( arg[i] - 'a');
        *option = *option | tmp;
        i++;
    }
}

void print_option(int option)
{
    int bit;
    int i;
    int mask;

    mask = 1 << 31;
    i = 1;
    while(i <= 32)
    {
        bit = option & mask;
        if (bit == 0)
            ft_putchar ('0');
        else
            ft_putchar ('1');
        if (i == 8 || i == 16 || i == 24)
            ft_putchar(' ');
        option = option <<1;
        i++;        
    }
    ft_putchar('\n');
}
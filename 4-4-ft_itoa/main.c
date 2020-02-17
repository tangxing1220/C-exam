#include <unistd.h>
#include "main.h"
#include <stdio.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    int i;
    char *s;

    i = 234234234;
    s = ft_itoa(i);
    ft_putstr(s);
    printf("\n%d", i);
    return (0);
}
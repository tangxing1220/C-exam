#include <stdio.h>

int main(void)
{
    char a[20] ="You_are_a_girl";
    char *p = a;
    char **ptr = &p;

    printf("**ptr = %c \n ", **ptr);
    ptr++;
    printf("**ptr = %c \n ", **ptr);
    return (0);
}
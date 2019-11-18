#include <unistd.h>

char *ft_strcpy(char *dest, const char *src);

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);    
}

int main (void)
{
    int  len;

    char *src = "This is the first exam in 42.";
    char *dest = "I believe I can fly. This is a piece of cake.";
    dest = ft_strcpy(dest, src);   
    len = ft_strlen(dest);
    write(1, dest, len);
    return (0);

}
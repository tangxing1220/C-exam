#include <unistd.h>

int ft_strlen(char *str);

int main(void)
{
    char *str = "HIVE Helsinki";
    write(1, str, ft_strlen(str));
    return (0);
} 

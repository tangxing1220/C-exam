#include "option.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != 0)
    {
        write(1,&str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int option;
    int i;
    int valid;

    if (argc == 1)
    {
        ft_putstr("options: abcdefghijklmnopqrstuvwxyz\n");
            return (0);
    }
    option = 0;
    i = 1;
    while (i < argc)
    {
        if (argv[i][0] == '-')
        {
            valid = is_valid_option(argv[i]);
            if (valid == -1)
            {
                ft_putstr("options: abcdefghijklmnopqrstuvwxyz\n");
                return (1);
            }
            else if (valid == 0)
            {
                ft_putstr("Invalid Option\n");
                return (1);
            }
            else 
                set_option(&option, argv[i]);
        }
        i++;
    }
    print_option(option);
    return (1);
}

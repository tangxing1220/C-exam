#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int flag;

    if (argc == 2)
    {
        flag = 0;
        i= 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            else
                break ;
        }
        while(argv[1][i] != '\0')
        {
            if ( argv[1][i] == ' ' || argv[1][i] == '\t')
                flag++;
            else
            {
                if (flag != 0)
                    {
                        write(1, " ", 1);
                        flag = 0;
                    }
                write(1, &argv[1][i],1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
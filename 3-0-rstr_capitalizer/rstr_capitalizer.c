#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 1)
        {
            write(1, "\n", 1);
            return (0);
        }
    i = 1;
    while (i <= (argc - 1))
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
            {
                if (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t' || argv[i][j + 1] == '\0')
                    {
                        argv[i][j] = argv[i][j] - 'a' + 'A';
                    }
            }
            else if (argv[i][j] >= 'A' && argv[i][j] <='Z')
            {
                if (argv[i][j + 1] != ' ' && argv[i][j + 1] != '\t' && argv[i][j + 1] != '\0')
                    {
                        argv[i][j] = argv[i][j] - 'A' + 'a';
                    }
            }
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    return (0);
}
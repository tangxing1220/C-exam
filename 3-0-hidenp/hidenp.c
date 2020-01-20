#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 3)
    {
        i = 0;
        j = 0;

        if (argv[1] == NULL)
            return (write(1, "1\n", 2));
        while(argv[1][i] != '\0')
        {
            while(argv[2][j] != '\0')
            {
                if(argv[1][i] == argv[2][j])
                    {
                        i++;
                        j++;
                        break ;
                    }
                else
                    j++;
            }
            if (argv[2][j] == '\0')
                return (write(1, "0\n", 2));
        }
        if (argv[1][i] == '\0')
                return (write(1, "1\n", 2));
    }
    return(write(1, "\n", 1));

}
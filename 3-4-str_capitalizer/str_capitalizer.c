#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int flg_str;
    int flg_word;

    i = 0;
    j = 0;
    flg_str = 0;
    flg_word = 0;
    if (argc == 1)
    {
        write(1, "\n", 1);
        return (0);
    }
    while(i < argc)
    {
        while(argv[i][j] != '\0')
        {
            if(argv[i][j] == ' ' || argv[i][j] == '\t')
            {
                if (flg_str == 0 && flg_word ==0) 
                {

                }

                
            }            
            else if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
            {
                if(flg_str == 0)
                    {
                        argv[i][j] = argv[i][j] - 'a' + 'A';
                        flg_word = 1;
                    }
            }
            else if(argv[i][j] >= 'A' && argv[i][j] <= 'Z' )
            {
                if ( flg_word == 1)
                    {
                        argv[i][j] = argv[i][j] - 'A' + 'a';
                    }
                else
                {
                    flg_str = 1;
                }
            }
            else
            {
                flg_str = 1;
            }
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    return (0);
}
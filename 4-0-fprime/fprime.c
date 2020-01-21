#include <stdio.h>
#include <stdlib.h>

int is_valid_prime(int nbr)
{
    int i;

    i = 2;
    while (i < nbr)
    {
        if (nbr % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    unsigned int i;
    unsigned int nbr;

    if (argc == 2)
    {
       nbr = atoi(argv[1]);
       if (nbr == 1)
            {
                printf("%d\n", nbr);
                return (0);
            }
        i = 2;
        while (i <= nbr )
        {
            if(is_valid_prime(i))
            {
                if ((nbr % i) == 0)
                {
                    nbr = nbr / i;
                    printf("%d",i);
                    if (nbr != 1)
                        printf("*");
                }
                else
                {
                    i++;
                }                
            }
            else
                i++;
        }
    }
    printf("\n");
    return (0);

}

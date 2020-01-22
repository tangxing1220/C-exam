#include <stdlib.h>

int ft_int_len(int nbr)
{
    int len;

    len = 0;
    while(nbr != 0)
    {
        len++;
        nbr = nbr /10;
    }
    return (len);
}



char *ft_itoa(int nbr)
{
    int len;
    int sign;
    char *res;

    if (nbr == -2147483648)
    {

    } 
    sign = 1;
    if (nbr < 0)
    {
        sign = -1;
        nbr = nbr * sign;
    }
    if (sign == -1)
    {
        len = ft_int_len(nbr) + 1;
    }
    else 
    {
        len = ft_int_len(nbr);
    }
    res = (char *)malloc(sizeof(char) * (len + 1));
    if (res == NULL)
        return (NULL);

    res[len] = '\0';
    while(nbr != 0)
    {
        res[len - 1] = nbr % 10 + '0';
        len--;
        nbr = nbr / 10; 
    }
    if (sign == -1)
    {
        res[0] = '-';
    }
    return (res);
}

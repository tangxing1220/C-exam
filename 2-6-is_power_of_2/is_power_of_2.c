int is_power_of_2(unsigned int n)
{
    unsigned int result;

    result = 1;
    if( n == 0)
        return (0);
    if (n == 1)
        return (1);
    while (result < n)
    {   
        result = result * 2;
        if(result == n)
            return (1);     
    }
    return (0);
}


int is_valid_option(char *str)
{
    int i;
    
    i = 1;
    if(str[i] == '\0')
        return (0);
    if(str[i] == 'h')
        return (-1);    
    while(str[i] != '\0')
    {
        if (str[i] < 'a' || str[i] > 'z')
            return (0);
        i++;
    }
    return (1);
}
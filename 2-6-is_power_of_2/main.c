#include <stdio.h>

int is_power_of_2(unsigned int n);

int main(void)
{
    unsigned int n;

    n = 0;
    if(is_power_of_2(n))
        printf("n = 0 is True 1\n");
    else 
        printf("n = 0 is False 0\n");

    n = 1;
    if(is_power_of_2(n))
        printf("n = 1 is True 1\n");
    else 
        printf("n = 1 is False 0\n");

    n = 2;
    if(is_power_of_2(n))
        printf("n = 2 is True 1\n");
    else 
        printf("n = 2 is False 0\n");

    n = 3;
    if(is_power_of_2(n))
        printf("n = 3 is True 1\n");
    else 
        printf("n = 3 is False 0\n");

    n = 7;
    if(is_power_of_2(n))
        printf("n = 7 is True 1\n");
    else 
        printf("n = 7 is False 0\n");

    n = 8;
    if(is_power_of_2(n))
        printf("n = 8 is True 1\n");
    else 
        printf("n = 8 is False 0\n"); 

    n = 9;
    if(is_power_of_2(n))
        printf("n = 9 is True 1\n");
    else 
        printf("n = 9 is False 0\n"); 

    return (0);  


}
#ifndef OPTION_H
# define OPTION_H

#include <unistd.h>

int ft_strlen(char *str);
int is_valid_option(char *str);
void set_option(int *option, char *arg);
void print_option(int option);
void ft_putchar(char c);
void ft_putstr(char *str);

#endif
#include <unistd.h>

void ft_putnb(int nbr)
{
	char c;
	if (nbr > 9)
	{
		ft_putnb(nbr / 10);
		c = nbr % 10 + '0';
		write(1, &c, 1);
	}
	else
	{
		c = nbr + '0';
		write(1, &c, 1);
	}

}

int main(int argc, char **argv)
{
	int sum;
	if (argv[0] == NULL)
		return (-1);
	sum = argc - 1;
	ft_putnb(sum);
	write(1, "\n", 1);
	return (0);
}


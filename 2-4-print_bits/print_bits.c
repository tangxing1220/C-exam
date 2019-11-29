#include <unistd.h>

void print_bits(unsigned char octet)
{
	int  i;

	i = 1 << 7;
	while (i > 0)
	{	if (octet & i)
			write(1, "1", 1);
		else 
			write(1, "0", 1);
		i = i / 2;
	}
}

int main(void)
{
	char c;
	
	c = 'c';
	print_bits(c);
	return (0);
}

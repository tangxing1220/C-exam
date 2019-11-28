#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i1;
	int i2;
	int re; 

	if (argc == 4)
	{
		re = 0;
		i1 = atoi(argv[1]);
	  	i2 = atoi(argv[3]);
		if (argv[2][0] == '*')
			re = i1 * i2;
		if (argv[2][0] == '/')
			re = i1 / i2;
		if (argv[2][0] == '%')
			re = i1 % i2;
		if (argv[2][0] == '+')
			re = i1 + i2;
		if (argv[2][0] == '-')
			re = i1 - i2;
		printf("%d", re);
	}
	printf("\n");
	return (0);
}

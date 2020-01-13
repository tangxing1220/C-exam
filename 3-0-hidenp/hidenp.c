#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	
	if (argc == 3)
	{
		i = 0;
		j = 0;
		while(argv[1][i] != '\0')
		{	
			while(argv[2][j] != '\0')
			{
				if ( argv[1][i] == argv[2][j])
				{
					j++;
					i++;					
					break ; 	
				}
				j++;
				if (argv[2][j] == '\0')
				{
					write(1, "0\n", 2);
					return (0);
				}
			}
			if (argv[1][i] == '\0')
			{
				write(1, "1\n", 2);
				return (0);
			}
		}	
	}
	write (1, "\n", 1);
	return (0);

}


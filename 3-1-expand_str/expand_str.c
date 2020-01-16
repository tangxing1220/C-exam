#include <unistd.h>

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] == ' ')
			i++;
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				if (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t'|| argv[1][i + 1] == '\0')  
				{
	
				}
				else
				{
					write(1, "   ", 3);
                }
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
			
			
		}

	}
	write(1, "\n", 1);
	return (0);
}


#include <unistd.h>

int main(void)
{
	char i;
	char j;
	
	i = 'a';
	j = 'B';
	while (i <= 'z' )
	{
		write(1, &i, 1);
		write(1, &j, 1);
		j=j+2;
		i=i+2;
	}
	write(1,"\n", 1);
	return (0);
}

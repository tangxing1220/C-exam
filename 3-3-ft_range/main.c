#include <stdio.h>

int *ft_range(int start, int end);

int main(void)
{
	int start;
	int end;
	int *array;
	int len;
	int i;

	start = 0;
	end = -3;
	array = ft_range(start, end);
	
	len = (start >= end) ? start - end : end - start;
	i = 0;
	while (i <= len)
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
}

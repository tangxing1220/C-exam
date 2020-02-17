#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i;
	int range;
	int *arr;

	i = 0;
	range = (start >= end) ? start - end : end - start;
	if (!(arr = (int *)malloc(sizeof(int) * (range + 1))))
		return (NULL);
	while (i <= range)
	{
		arr[i] = start;
		if (start >= end)
			start--;
		else
			start++;
		i++;	
	}
	return (arr);
}


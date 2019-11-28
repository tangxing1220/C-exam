int	max(int* tab, unsigned int len)
{
	int max;

	max = 0;

	if (len == 0)
		max = 0;
	while(len > 0)
	{
		if (tab[len] >= max)
			max = tab[len];
		len --;
	}
	return (max);
}

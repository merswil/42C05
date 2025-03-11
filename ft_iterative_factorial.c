
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	a;

	a = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		a = a * i;
		i++;
	}
	return (a);
}

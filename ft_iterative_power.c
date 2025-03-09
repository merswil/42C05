
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if ((nb == 0) && (power == 0))
		return (1);
	else if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

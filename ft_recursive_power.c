
int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

#include<stdio.h>

int	t_iterative_factorial(int nb)
{
	int	i;
	int	a;

	a = 1;
	i = 1;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			a = a * i;
			i++;
		}
		return (a);
	}
	return (0);
}

int	main(void)
{
	printf("%d", t_iterative_factorial(3));
}






#include<stdio.h>

int 	ft_recursive_factorial(int nb)
{
	if (nb < 1)
	{
		return (0);
	}
	if (nb == 1)
	{
        return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

int main(void)
{
	printf("%d", ft_recursive_factorial(-5));
}





#include<stdio.h>
int ft_iterative_power(int nb, int power)
{
	int	i;
	int result;

	i = 0;
	result = 1;
	if ((nb == 0) && (power == 0))
	{
		return (1);
	}
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

int main(void)
{
	printf("%d", ft_iterative_power(3, 2));
}






int ft_recursive_power(int nb, int power)
{
	int	i;
	int result;

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

#include<stdio.h>

int main(void)
{
	printf("%d", ft_recursive_power(3, 3));
}








int ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index < 3)
	{
		return (1);
	}
	else
	{
		return(ft_fibonacci(index - 1) + ft_fibonacci(index -2));
	}
}

#include<stdio.h>

int main(void)
{
	printf("%d", ft_fibonacci(6));
}








#include <stdio.h>

int ft_sqrt(int nb)
{
    int i = 0;

    if (nb < 0)
    {
        return 0;
    }

    while (i * i < nb)
    {
        i++;
    }
    if (i * i == nb)
    {
        return i;
    }

    return 0;
}

int main(void)
{
    // Test cases
    printf("%d\n", ft_sqrt(9));   // Should print 3 (sqrt of 9 is 3)
    printf("%d\n", ft_sqrt(16));  // Should print 4 (sqrt of 16 is 4)
    printf("%d\n", ft_sqrt(25));  // Should print 5 (sqrt of 25 is 5)
    printf("%d\n", ft_sqrt(7));   // Should print 0 (sqrt of 7 is irrational)
    printf("%d\n", ft_sqrt(-4));  // Should print 0 (no real sqrt for negative numbers)
    printf("%d\n", ft_sqrt(0));   // Should print 0 (sqrt of 0 is 0, but following requirement)
    return 0;
}









#include<stdio.h>

int ft_is_prime(int nb)
{
	int i;

	i = 0;
    if (nb <= 1)
    {
        return (0);
       }
    if (nb == 2)
    {
        return (1);
       }
    if (nb % 2 == 0)
    {
        return (0);
	}
	while (i *  i <= nb)
	{
		if (nb % i == 0)
		{
            return (0);
		}
		i += 2;
	}
	return (1);
}

int main(void)
{
    printf("%d\n", ft_is_prime(1));
    printf("%d\n", ft_is_prime(2));
    printf("%d\n", ft_is_prime(3));
    printf("%d\n", ft_is_prime(4));
    printf("%d\n", ft_is_prime(5));
    printf("%d\n", ft_is_prime(6));
    return 0;
}

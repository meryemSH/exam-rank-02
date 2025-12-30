#include <unistd.h>

int	is_prime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
        i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sin;
	int	results;

	i = 0;
	sin = 1;
	results = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sin = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		results = results * 10 + (str[i] - '0');
		i++;
	}
	return (results * sin);
}

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	putchar((nb % 10) + '0');
}

int	main(int argc, char **argv)
{
	int i = 0;
	int nb = 0;

	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	int n = ft_atoi(argv[1]);
	if (n < 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	while (i <= n)
	{
		if (is_prime(i))
		{
			nb += i;
		}

		i++;
	}
	ft_putnbr(nb);
	write(1, "\n", 1);
}
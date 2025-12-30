#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	char	bit;

	i = 7;
	while (i >= 0)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}
int	main(void)
{
	print_bits(2);
	write(1, "\n", 1);

	print_bits(42);
	write(1, "\n", 1);

	print_bits(255);
	write(1, "\n", 1);

	return (0);
}
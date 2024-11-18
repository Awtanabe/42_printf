#include "ft_printf.h"

void	ft_putnbr(int n, int *counter)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*counter += 11;
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		*counter += 1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, counter);
	}
	c = '0' + (n % 10);
	write(1, &c, 1);
	*counter += 1;
}

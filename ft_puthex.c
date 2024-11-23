#include "printf.h"
#include <unistd.h>

void	_ft_puthex(int i, int *counter)
{
	char	c;
	int		digit;

	if (i > 0)
	{
		digit = i % 16;
		if (digit >= 10)
		{
			_ft_puthex(i / 16, counter);
			c = 'a' + digit - 10;
			*counter += 1;
			write(1, &c, 1);
		}
		else
		{
			_ft_puthex(i / 16, counter);
			c = '0' + digit;
			*counter += 1;
			write(1, &c, 1);
		}
	}
}

void	ft_puthex(int i, int *counter)
{
	int	digit;

	if (i == 0)
	{
		*counter += 1;
		write(1, "0", 1);
		return ;
	}
	if (i < 0)
	{
		i *= -1;
		*counter += 1;
		write(1, "-", 1);
	}
	_ft_puthex(i, counter);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int counter = 0;
// 	// int res;
// 	// int res2;

// 	ft_puthex(-9, &counter);
// 	// res = printf(" %x ", 0);

// 	// printf("\n");
// 	// res2 = printf("%d", res);
// 	// printf("res %d res2 %d", res, res2);
// }
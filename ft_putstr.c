#include "ft_printf.h"
#include <stdio.h>

void	ft_putstr(const char *s, int *counter)
{
	if (!s)
	{
		write(1, "(null)", 6);
		*counter += 6;
		return ;
	}
	while (*s)
	{
		ft_putchar(*s, counter);
		s++;
	}
}

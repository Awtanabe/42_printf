#include "ft_printf.h"
#include <stdio.h>

void	handle_format(const char *p, va_list args, int *counter)
{
	if (*p && *p == 's')
		ft_putstr(va_arg(args, char *), &counter);
	else if (*p && *p == 'c')
		ft_putchar(va_arg(args, int), &counter);
	else if (*p && *p == 'd')
		ft_putnbr(va_arg(args, int), &counter);
	else if (*p && *p == 'i')
		ft_putnbr(va_arg(args, int), &counter);
	else if (*p)
		ft_putchar(*p, &counter);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	const char	*p = format;
	int			counter;

	counter = 0;
	va_start(args, format);
	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;
			handle_format(p, args, &counter);
		}
		else if (*p)
			ft_putchar(*p, &counter);
		++p;
	}
	va_end(args);
	return (counter);
}

// int	main(void)
// {
// 	int	res;
// 	int	res2;

// 	res = ft_printf(" %d ", 10);
// 	printf("\n");
// 	res2 = printf(" %d ", 10);
// 	printf("res = %d res2 = %d", res, res2);
// }

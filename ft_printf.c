#include "ft_printf.h"
#include <stdio.h>

void	handle_format(const char *p, va_list *args, int *counter)
{
	int	res;

	if (*p && *p == 's')
		ft_putstr(va_arg(*args, char *), counter);
	else if (*p && *p == 'c')
	{
		ft_putchar(va_arg(*args, int), counter);
	}
	else if (*p && (*p == 'd' || *p == 'i'))
		ft_putnbr(va_arg(*args, int), counter);
	else if (*p && *p == 'p')
		ft_putp(va_arg(*args, unsigned long), counter);
	else if (*p && *p == 'x')
	{
		res = va_arg(*args, int);
		// printf("^^^^^res %d\n", res);
		ft_puthex(res, counter);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	const char	*p = format;
	int			counter;
	int			val;

	counter = 0;
	va_start(args, format);
	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;
			handle_format(p, &args, &counter);
		}
		else if (*p)
		{
			ft_putchar(*p, &counter);
		}
		p++;
	}
	va_end(args);
	return (counter);
}

// int	main(void)
// {
// 	int	i;

// 	i = 3;
// 	printf("親 Pointer address (full): %p\n", &i);
// 	ft_printf("%p", &i);
// 	printf("\n");
// }

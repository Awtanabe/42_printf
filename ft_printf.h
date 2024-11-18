#ifndef PRINTF_HEADER
# define PRINTF_HEADER
# include <stdarg.h>
# include <unistd.h>
void	ft_putchar(char c, int *counter);
void	ft_putstr(const char *s, int *counter);
void	ft_putnbr(int n, int *counter);
int		ft_printf(const char *format, ...);

#endif

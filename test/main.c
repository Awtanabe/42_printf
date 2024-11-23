// #include <inttypes.h> // PRIuPTR を使うために必要
// #include <stdarg.h>
// #include <stdint.h> // uintptr_t
// #include <stdio.h>

// void	func(const char *format, ...)
// {
// 	va_list		args;
// 	const char	*p = format;
// 	uintptr_t	res;
// 	void		*ptr;

// 	va_start(args, format);
// 	// ポインタを uintptr_t に直接取得
// 	ptr = va_arg(args, void *);
// 	res = (uintptr_t)ptr;
// 	printf("%" PRIuPTR "\n", res); // uintptr_t を安全に出力
// 	va_end(args);
// }

// int	main(void)
// {
// 	int i = 2;
// 	func("%p", &i); // ポインタのアドレスを渡す
// }

#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>

void	func(const char *format, ...)
{
	va_list			args;
	unsigned long	address;

	va_start(args, format);
	address = (unsigned long)va_arg(args, void *);
	printf("子 Pointer address (full): %lu\n", (unsigned long)address);
	va_end(args);
}

int	main(void)
{
	int	i;

	i = 2;
	func("%p", &i);
	printf("親 Pointer address (full): %p\n", &i);
	return (0);
}

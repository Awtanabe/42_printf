#include <stdio.h>
#include <unistd.h>

void	ft_putp(unsigned long p, int *counter)
{
	char	hex_digits[] = "0123456789abcdef";
	int		i;

	char buffer[16]; // 最大64ビットポインタは16桁分のバッファ
	i = 0;
	// 特殊ケース：アドレスが 0 の場合
	if (p == 0)
	{
		write(1, "0x0", 3);
		*counter += 3;
		return ;
	}
	// 16進数に変換（下位桁から計算）
	while (p > 0)
	{
		buffer[i++] = hex_digits[p % 16];
		p /= 16;
	}
	// "0x" を先頭に追加
	write(1, "0x", 2);
	*counter += 2;
	// バッファを逆順に出力
	while (--i >= 0)
	{
		write(1, &buffer[i], 1);
		*counter += 1;
	}
}

// void	func(const char *format, ...)
// {
// 	va_list		args;
// 	uintptr_t	address;

// 	va_start(args, format);
// 	address = (uintptr_t)va_arg(args, void *);
// 	printf("子 Pointer address (full): %lu\n", (unsigned long)address);
// 	va_end(args);
// }

// int	main(void)
// {
// 	int	i;

// 	i = 2;
// 	func("%p", &i);
// 	printf("親 Pointer address (full): %p\n", &i);
// 	return (0);
// }

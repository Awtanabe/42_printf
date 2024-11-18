

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int i;
	int digit;
	char c;
	i = -489;

	if (i < 0)
	{
		i *= -1;
		write(1, "-", 1);
	}

	while (i > 0)
	{
		digit = i % 16;

		if (digit >= 10)
		{
			c = 'a' + digit - 10;
			write(1, &c, 1);
			i /= 16;
		}
		else
		{
			// aa
			// 比較してるのが char と intだからか
			c = '0' + digit;
			write(1, &c, 1);
			i /= 16;
		}
	}
}
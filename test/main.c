#include <stdio.h>

void	func(int *counter)
{
	*counter += 1;
	printf("%d", *counter);
}

int	main(void)
{
	int i;
	i = 2;
	func(&i);
}
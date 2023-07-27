#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

int	main(void)
{
	printf("%c \n", tolower('A'));
	printf("%c \n", ft_tolower('A'));
}
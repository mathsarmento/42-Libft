#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int	main(void)
{
	printf("%c \n", toupper('f'));
	printf("%c \n", ft_toupper('f'));
}
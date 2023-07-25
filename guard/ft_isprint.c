#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}

int	main(void)
{
	printf("%i\n", isprint(130));
	printf("%i\n", ft_isprint(130));
}
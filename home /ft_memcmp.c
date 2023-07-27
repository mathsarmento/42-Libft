#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_memcmp (const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*(const char *)(s1 + i) != *(const char *)(s2 + i))
			return ((*(const char *)(s1 + i)) - (*(const char *)(s2 + i)));
		i++;
	}
	return (0);
}

int	main(void)
{
	char s1[] = "pao\0\naw ";
	char s2[] = "pao\0law ";

/* 	printf("%i\n", ft_memcmp(s1, s2, 7)); */
	printf("%i\n", memcmp(s1, s2, 5));
	printf("%i\n", ft_memcmp(s1, s2, 5));
}
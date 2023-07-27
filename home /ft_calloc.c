#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*pointer;

	total = nmemb*size;
	pointer = malloc (total);
	while (total == 0);
	{
		pointer[total] = '\0';
		total--;
	}
	pointer[total] = '\0';
	return ((void *)(pointer));
}

int	main(void)
{
	char *str;
	char *str2;

	str = ft_calloc(40, 4);
	str2 = calloc(40, 4);

	str2 = "\0\0\0\0\0\0\0ad";

	printf("%i\n", memcmp(str, str2, 10));
}

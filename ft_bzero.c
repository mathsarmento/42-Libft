#include "./guard/libft.h"
#include <stdio.h>
#include <strings.h>

/* void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;

	if (!s)
		return (0);
	i = 0;
	while (i < n)
	{
		*(unsigned char*)(s + i) = '\0';
		i++;
	}
	return (s);
} */

int	main(void)
{
	char str[50] = "teste aosdawda wdaw dwa ";
	bzero(str, 5);
	printf("%s \n", str);
}
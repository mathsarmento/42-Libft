#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char*)(s + i) = (unsigned char)(c);
		i++;
	}
	return (s);
}

int	main(void)
{
	char str[10];
	ft_memset(str, '$', 5);
	printf("%s \n", str);
}
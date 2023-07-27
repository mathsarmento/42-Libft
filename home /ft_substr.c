#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!len)
		return (NULL);
	sub = malloc (len * sizeof(char));
	while (i != len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	return(sub);
}

int	main(void)
{
	char	str[] = "matheus teste";
	char	*sub = ft_substr(str, 5, 4);
	printf("%s", sub);
}
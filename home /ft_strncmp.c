#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char s1[] = "paolaw dawd ";
	char s2[] = "paolaw ";

	printf("%i\n", ft_strncmp(s1, s2, 10));
	printf("%i\n", strncmp(s1, s2, 10));
}
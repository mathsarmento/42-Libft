#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	printf("%li\n", strlen("adwda wdwa \0 dwa dwad\0 dwa \a dwadaw d"));
	printf("%li\n", ft_strlen("adwda wdwa \0 dwa dwad\0 dwa \a dwadaw d"));
}
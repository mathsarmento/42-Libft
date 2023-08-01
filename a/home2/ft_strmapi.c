
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = '\0';
		i++;
	}
	return ;
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*pointer;

	total = nmemb * size;
	pointer = (void*) malloc (total);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, nmemb);
	return ((void *)(pointer));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	i = 0;
	newstr = (char *)ft_calloc(ft_strlen(s) + 1,sizeof(char));
	while (s[i])
	{
		newstr[i] = (f)(i, s[i]);
		i++;
	}
	return (newstr);
}
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (s1[i])
		return (NULL);
	str = calloc(ft_strlen (s1), sizeof(char));
	while (s1[i])
	{
		while (s1[i] == set[j])
		{
			
		}
	}
	
	
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*pointer;

	total = nmemb * size;
	pointer = malloc (total);
	while (total != 0)
	{
		pointer[total] = '\0';
		total--;
	}
	pointer[total] = '\0';
	return ((void *)(pointer));
}

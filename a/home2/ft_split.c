
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
	return (sub);
}

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

int	divwords(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 1;
	if (s[i] == c)
		words = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != '\0' && s[i + 1] != c ))
			words++;
		i++;
	}
	printf("%i\n", words);
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		save;
	int		j;

	i = 0;
	j = 0;
	tab = (char **) ft_calloc (divwords(s, c), sizeof(char *));
	if (!tab || !s)
		return (NULL);
	save = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (i - save != 0)
			{
				tab[j] = ft_substr(s, save, (i - save));
				j++;
			}
			save = i + 1;
		}
		i++;
	}
	if (s[i] != c)
		tab[j] = ft_substr(s, save, (i - save));
	return (tab);
}


// int	main(void)
// {
// 	char	**div = ft_split("saaaasaaassaaaaaaaasa", 's');
// 	printf("%s\n", div[0]);
// 	printf("%s\n", div[1]);
// 	printf("%s\n", div[2]);
// 	printf("%s\n", div[3]);

// }
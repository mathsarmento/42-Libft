
#include "libft.h"

static int divwords(char const *s, char c);

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

static int	divwords(char const *s, char c)
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
	return (words);
}

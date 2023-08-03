/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:17:56 by msarment          #+#    #+#             */
/*   Updated: 2023/08/02 21:53:20 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	tab = (char **) ft_calloc (divwords(s, c) + 1, sizeof(char *));
	if (!tab || !s)
		return (NULL);
	save = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (i - save != 0)
				tab[j++] = ft_substr(s, save, (i - save));
			save = i + 1;
		}
		i++;
	}
	if (s[i] != c && save != i)
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
		if ((s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			words++;
		i++;
	}
	return (words);
}

// int	main(void)
// {
// 	ft_split("  tripouille  42  ", ' ');
// }
// #include <stdio.h>

// int	main(void)
// {
// 	char	**tab = ft_split("aaa b aaaa b aaa", 'b');
// 	printf("%s\n", tab[0]);
// 	printf("%s\n", tab[1]);
// 	printf("%s\n", tab[2]);
// 	printf("%s\n", tab[3]);
// 	printf("%i\n", divwords("aaa b aaaa b aaa", 'b'));
// 	free(tab);
// }
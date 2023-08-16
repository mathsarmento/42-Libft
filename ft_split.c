/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:17:56 by msarment          #+#    #+#             */
/*   Updated: 2023/08/10 19:43:39 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char delim);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	size;
	char	**tab;

	tab = (char **) ft_calloc (count_words(s, c) + 1, sizeof(char *));
	if (!tab || !s)
		return (NULL);
	i = 0;
	size = 0;
	while (*s)
	{
		if (*s != c)
			size++;
		if (*s == c && size > 0)
		{
			tab[i] = ft_substr((s - size), 0, size);
			i++;
			size = 0;
		}
		s++;
	}
	if (size > 0)
		tab[i] = ft_substr((s - size), 0, size);
	return (tab);
}

static int	count_words(char const *str, char delim)
{
	int	count;
	int	new;

	count = 0;
	new = 1;
	while (*str)
	{
		if (*str != delim && new == 1)
		{
			count++;
			new = 0;
		}
		if (*str == delim)
			new = 1;
		str++;
	}
	return (count);
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

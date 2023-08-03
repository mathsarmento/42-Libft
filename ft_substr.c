/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:35:11 by msarment          #+#    #+#             */
/*   Updated: 2023/08/02 20:44:16 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	strlen;
	size_t	size;
	size_t	i;

	strlen = ft_strlen(s);
	if (start >= strlen)
		size = 1;
	else if (len >= strlen)
		size = (strlen - start) + 1;
	else
		size = len + 1;
	sub = malloc(size);
	if (!size)
		return (NULL);
	i = 0;
	while (((i + start) < strlen) && (i < len))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

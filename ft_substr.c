/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:35:11 by msarment          #+#    #+#             */
/*   Updated: 2023/08/02 20:14:22 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = ft_calloc (len, sizeof(char));
	if (!sub)
		return (sub);
	while (i != len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	return (sub);
}

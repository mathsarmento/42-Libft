/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:19:21 by msarment          #+#    #+#             */
/*   Updated: 2023/08/10 18:13:43 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	str = (char *)calloc(ft_strlen (s1), sizeof(char));
	while (s1)
	{
		j = 0;
		if (*s1 == set[j])
		{
			str++;
		}
		// str[i] = 
		i++;
	}
	return ((char *)s1);
}

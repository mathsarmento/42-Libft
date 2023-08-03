/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:29:47 by msarment          #+#    #+#             */
/*   Updated: 2023/08/02 21:10:29 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*pointer;
	size_t		i;

	i = 0;
	pointer = NULL;
	c = c % 256;
	while (i < n)
	{
		if (*(const char *)(s + i) == c)
		{
			pointer = (void *)(s + i);
			return (pointer);
		}
		i++;
	}
	return (pointer);
}

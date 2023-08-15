/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:29:47 by msarment          #+#    #+#             */
/*   Updated: 2023/08/15 15:13:45 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*pointer;
	size_t		i;

	i = 0;
	pointer = NULL;
	if (c > 0)
		c = c % 128;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char) c)
		{
			pointer = (void *)(s + i);
			return (pointer);
		}
		i++;
	}
	return (pointer);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:07:06 by msarment          #+#    #+#             */
/*   Updated: 2023/07/25 19:29:15 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lenstr;
	size_t	i;

	i = 0;
	lenstr = ft_strlen(dst);
	while (i < size)
	{
		dst[lenstr + i] = src[i];
		i++;
	}
	dst[lenstr + i] = '\0';
	lenstr = ft_strlen(dst);
	return (lenstr);
}

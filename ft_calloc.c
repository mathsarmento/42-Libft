/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:29:01 by msarment          #+#    #+#             */
/*   Updated: 2023/07/27 18:29:30 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*pointer;

	total = nmemb * size;
	pointer = malloc (total);
	while (total == 0)
	{
		pointer[total] = '\0';
		total--;
	}
	pointer[total] = '\0';
	return ((void *)(pointer));
}

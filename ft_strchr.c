/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:30:45 by msarment          #+#    #+#             */
/*   Updated: 2023/07/27 18:30:52 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	char	*pointer;
	int		i;

	i = 0;
	pointer = NULL;
	while (s[i])
	{
		if (s[i] == c)
		{
			pointer = (char *)(s + i);
			return (pointer);
		}
		i++;
	}
	return (pointer);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:34:37 by msarment          #+#    #+#             */
/*   Updated: 2023/08/10 16:56:20 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;
	int		i;

<<<<<<< HEAD
	c = c % 128;
=======
	if (c > 255)
		return ((char *) s);
>>>>>>> c7fac63f0dc80de20b3cc6ef64948a2c3f475a19
	i = 0;
	pointer = NULL;
	while (s[i])
	{
		if (s[i] == c)
			pointer = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
			pointer = (char *)(s + i);
	return (pointer);
}

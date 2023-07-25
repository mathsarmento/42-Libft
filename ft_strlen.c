/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:49:40 by msarment          #+#    #+#             */
/*   Updated: 2023/07/25 16:51:07 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	printf("%li\n", strlen("adwda wdwa \0 dwa dwad\0 dwa \a dwadaw d"));
	printf("%li\n", ft_strlen("adwda wdwa \0 dwa dwad\0 dwa \a dwadaw d"));
}
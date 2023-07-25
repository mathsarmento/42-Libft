/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:23:58 by msarment          #+#    #+#             */
/*   Updated: 2023/07/25 18:37:58 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	*(unsigned char *)(dest + i) = '\0';
	return (dest);
}

int	main(void)
{
	char	str2[40] = "o\0 matheus foi ";
	char	strcpy[40] = "o\0 matheus foi ";
	char	str[50] = "o matheus foi a feira compra pão";

	memmove(strcpy, str, 20);
	memcpy(str2, str, 20);
	printf("%s\n", str);
	printf("%s\n", str2);
	printf("%s\n", strcpy);
}
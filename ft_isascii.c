/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:54:01 by msarment          #+#    #+#             */
/*   Updated: 2023/07/20 18:57:39 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= '0' && c <= '9')
		return (8);
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (8);
	return (0);
}

int	main(void)
{
	printf("%i\n", isascii(888));
	printf("%i\n", ft_isascii(888));
}

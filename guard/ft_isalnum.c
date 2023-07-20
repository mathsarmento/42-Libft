/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:50:04 by msarment          #+#    #+#             */
/*   Updated: 2023/07/20 18:52:07 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (8);
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (8);
	return (0);
}

int	main(void)
{
	printf("%i\n", isalnum('3'));
	printf("%i\n", ft_isalnum('3'));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:38:06 by msarment          #+#    #+#             */
/*   Updated: 2023/07/20 18:46:05 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z' ))
		return (1024);
	return (0);
}

int	main(void)
{
	printf("%i\n", isalpha('~'));
	printf("%i", ft_isalpha('~'));
}
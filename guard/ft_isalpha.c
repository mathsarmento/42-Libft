/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheussarmento <matheussarmento@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:38:06 by msarment          #+#    #+#             */
/*   Updated: 2023/07/25 15:08:39 by matheussarm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
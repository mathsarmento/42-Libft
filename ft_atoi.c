/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:08:11 by msarment          #+#    #+#             */
/*   Updated: 2023/07/27 18:54:39 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putnbr(const char *nptr, int size);

int	ft_atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	nbr;

	neg = 1;
	i = 0;
	while (nptr[i])
	{
		if ((nptr[i] == '+' || nptr[i] == '-' || nptr[i] >= '0') \
		&& nptr[i] <= '9')
		{
			if (nptr[i] == '-')
				neg = neg * -1;
			i++;
			if (nptr[i] >= '0' && nptr[i] <= '9')
				break ;
			return (0);
		}
		else if ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
			i++;
		else
			return (0);
	}
	nbr = ft_putnbr(nptr, i) * neg;
	return (nbr);
}

static int	ft_putnbr(const char *nptr, int i)
{
	int	result;

	result = 0;
	while ((nptr[i] >= '0' && nptr[i] <= '9') && nptr[i] != '\0')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result);
}

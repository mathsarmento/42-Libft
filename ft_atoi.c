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

static int	check_limit(int nbr, int next, int neg);

int	ft_atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	nbr;

	nbr = 0;
	neg = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] > 8 && nptr[i] < 14))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		if (check_limit(nbr, nptr[i] - '0', neg))
			return (0);
		nbr = nbr * 10 + (nptr[i++] - '0');
	}
	return (nbr * neg);
}

static int	check_limit(int nbr, int next, int neg)
{
	if (neg > 0)
	{
		if (nbr > (MAX_INT - next) / 10)
			return (1);
	}
	else 
	{
		if (-nbr < (MIN_INT + next) / 10)
			return (1);
	}
	return (0);
}

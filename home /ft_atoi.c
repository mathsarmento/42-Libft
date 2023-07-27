#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_putnbr(const char *nptr, int size);
int	ft_atoi(const char *nptr)
{
	int	i;
	int neg;
	int	nbr;

	neg = 1;
	i = 0;
	while (nptr[i])
	{
		if (nptr[i] == '+' || nptr[i] == '-')
		{
			if (nptr[i] == '-')
				neg = neg * -1;
			i++;
			if (nptr[i] >= '0' && nptr[i] <= '9')
				break;
			return (0);
		}
		else if ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
			i++;
		else if (nptr[i] >= '0' && nptr[i] <= '9')
			break;
		else
			return (0);
	}
	nbr = ft_putnbr(nptr, i);
	nbr = nbr * neg;
	return (nbr);
}

int	ft_putnbr(const char *nptr, int i)
{
	int	result;

	result = 0;
	while ((nptr[i] >= '0' && nptr[i] <= '9') && nptr[i] != '\0')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return(result);
}

int	main(void)
{
	printf("%i\n", ft_atoi("\n \n \n\n 58adw 98"));
	printf("%i\n", atoi("\n \n \n\n 58adw 98"));
}
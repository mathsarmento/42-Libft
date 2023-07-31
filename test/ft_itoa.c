
#include "libft.h"
#include <stdio.h>

// INT MIN = -2147483648
// INT MAX =  2147483647
static size_t	nbrlen(int nbr);
static void		fillchar(char *pointer, int nbr, size_t len);

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = '\0';
		i++;
	}
	return ;
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*pointer;

	total = nmemb * size;
	pointer = (void*) malloc (total);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, nmemb);
	return ((void *)(pointer));
}

char	*ft_itoa(int n)
{
	char	*intc;

	intc = ft_calloc(nbrlen(n), sizeof(char));
	if (n == -2147483648)
	{
		intc = "-2147483648";
		return (intc);
	}
	else if ( n == 0)
	{
		intc = "0";
		return (intc);
	}
	fillchar(intc, n, nbrlen(n));
	return (intc);
}

static size_t	nbrlen(int nbr)
{
	size_t	cont;

	cont = 0;
	if (nbr == -2147483648)
		return(11);
	if (nbr < 0)
	{
		cont++;
		nbr = nbr * -1;
	}
	if (nbr == 0)
		return(1);
	while (nbr > 0)
	{
		cont++;
		nbr = nbr / 10;
	}
	return (cont);
}

static void	fillchar(char *pointer, int nbr, size_t len)
{

	if (nbr < 0)
	{
		nbr = nbr * -1;
		pointer[0] = '-';
	}
	while (nbr > 0)
	{
		pointer[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
}

int	main(void)
{
	printf("%s\n", ft_itoa(12));
}

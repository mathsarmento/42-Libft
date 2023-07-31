
#include "libft.h"

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
